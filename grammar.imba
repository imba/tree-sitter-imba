def newlineCommaSep(_, rule)
	seq
		rule
		repeat seq
			# _._newline
			seq optional(','), _._newline
			rule
	# seq(rule, repeat(seq(seq(optional(","), _._newline), rule)))

def commaSep1(rule)
	seq(rule, repeat(seq(",", rule)))

def commaSep(rule)
	optional commaSep1(rule)

def sep1 rule, separator
	seq rule, repeat(seq(separator, rule))

module.exports = grammar
	name: "imba"

	conflicts: do [
		# []
		# check later
		[$1.call_expression, $1.program]
		[$1.call_expression, $1._statement_block]
		[$1.call_expression, $1._initializer]
		[$1.arguments, $1.parenthesized_expression]
		# [$1.parenthesized_expression, $1.arguments]
		# [$1.call_expression, $1.parenless_args]
		# [$1.call_expression, $1.assignment_pattern]
		# [$1.call_expression, $1.parenless_args, $1.member_expression, $1.subscript_expression]
		# [$1.parenless_args, $1.member_expression, $1.subscript_expression]
		# [$1.parenless_args, $1.member_expression]
		# [$1.parenless_args, $1.subscript_expression]

		[$1.primary_expression, $1._property_name],
		[$1.primary_expression, $1._property_name, $1.arrow_function],
		[$1.primary_expression, $1.arrow_function],
		[$1.primary_expression, $1.method_definition],
		[$1.primary_expression, $1.rest_pattern],
		[$1.primary_expression, $1.pattern],
		# [$1.primary_expression, $1._for_header],
		[$1.array, $1.array_pattern],
		[$1.object, $1.object_pattern],
		[$1.assignment_expression, $1.pattern],
		[$1.assignment_expression, $1.object_assignment_pattern],
		# [$1.labeled_statement, $1._property_name],
		# [$1.computed_property_name, $1.array],
		# [$1.binary_expression, $1._initializer],
		[$1.declaration, $1.primary_expression]
		[$1.subscript_expression, $1.arrow_function]
		[$1.program, $1.subscript_expression]
		[$1._statement_block, $1.subscript_expression]
		[$1._initializer, $1.subscript_expression]
	],
	
	externals: do [
		$1._newline
		$1._indent
		$1._dedent
	]
	### supertypes:
	# an array of hidden rule names which should 
	# be considered to be ‘supertypes’ in the generated node types file
	### 
	supertypes: do [
		$1.statement
		$1.declaration
		$1.expression_statement
		$1.primary_expression
		$1.pattern
	]


	### inline
	# an array of rule names that should be automatically removed from the
	# grammar by replacing all of their usages with a copy of their definition.
	# This is useful for rules that are used in multiple places but for which
	# you don’t want to create syntax tree nodes at runtime.
	###
	inline: do [
		$1._call_signature
		$1._formal_parameter
		$1.statement
		$1.expression_statement
	# 	$1._semicolon
		$1._identifier
		$1._reserved_identifier
		$1._tag_attribute
		$1._tag_element_name
	# 	$1._tag_child
		$1._tag_element
		$1._tag_attribute_name
		$1._tag_attribute_value
		# $1._tag_identifier
		$1._lhs_expression
	],


	### precedences
	# an array of array of strings, where each array of strings defines named precedence levels in descending order.
	# These names can be used in the prec functions to define precedence relative only to other names 
	# in the array, rather than globally. Can only be used with parse precedence, not lexical precedence.
	###
	precedences: do [
		[
			'member'
			'call'
			# 		$1.update_expression
			# 		'unary_void'
			# 		'binary_exp'
			# 		'binary_times'
			# 		'binary_plus'
			# 		'binary_shift'
			# 		'binary_compare'
			# 		'binary_relation'
			# 		'binary_equality'
			# 		'bitwise_and'
			# 		'bitwise_xor'
			# 		'bitwise_or'
			# 		'logical_and'
			# 		'logical_or'
			# 		'ternary'
			# 		$1.sequence_expression
			# 		$1.arrow_function
		],
		['assign', $1.primary_expression]
		['member', 'new', 'call', $1.expression_statement]
		['declaration', 'literal']
		[$1.assignment_expression, $1.pattern]
	# [$1.method_definition, 'literal']
	# [$1.method_definition,$1.getter, $1.setter, $1.field_definition]
		[$1.primary_expression, $1.statement_block, 'object']
		# [$1._inline_statement_block, $1.subscript_expression]
		[$1.import_statement, $1.import]
		[$1.export_statement, $1.primary_expression]
		[$1.tag_attribute, $1.tag_expression, $1.primary_expression]
	],


	### extras
	# an array of tokens that may appear anywhere in the language.
	# This is often used for whitespace and comments.
	# The default value of extras is to accept whitespace.
	# To control whitespace explicitly, specify extras: do [] in your grammar.
	###
	extras: do [
		$1.comment
		# python whitespace
		# didn't test this yet
		/[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
		# js whitespace
		# /[\s\p{Zs}\uFEFF\u2060\u200B]/
	]

	word: do $1.identifier


	rules:
		program: do repeat seq $1.statement, optional(";")
		
		debugger_statement: do 'debugger'
		break_statement: do 'break'
		continue_statement: do 'continue'

		statement: do choice
			$1.export_statement
			$1.import_statement
			$1.debugger_statement
			$1.expression_statement
			$1.declaration
			$1.statement_block

			$1.if_statement
			# $1.switch_statement
			# $1.for_statement
			# $1.for_in_statement
			# $1.while_statement
			# $1.do_statement
			# $1.try_statement
			# $1.with_statement

			$1.break_statement
			$1.continue_statement
			$1.return_statement
			# $1.throw_statement
			# $1.empty_statement
			# $1.labeled_statement

		namespace_export: do seq
			'*', 'as', $1._module_export_name

		_module_export_name: do choice
			$1.identifier
			$1.string

		export_clause: do seq
			'{',
			commaSep($1.export_specifier),
			optional(','),
			'}'

		export_specifier: do seq
			field('name', $1._module_export_name)
			optional seq
				'as',
				field('alias', $1._module_export_name)
		
		return_statement: do prec.right 2, seq(
			'return'
			optional $1.expression_statement
		)
				
		decorator: do seq
			'@'
			choice
				$1.identifier
				alias($1.decorator_member_expression, $1.member_expression)
				alias($1.decorator_call_expression, $1.call_expression)
			
		import_clause: do choice
			$1.namespace_import
			$1.named_imports
			seq
				$1.identifier
				optional seq
					','
					choice
						$1.namespace_import
						$1.named_imports

		namespace_import: do seq
			"*", "as", $1.identifier


		named_imports: do seq
			'{'
			commaSep($1.import_specifier)
			optional(',')
			'}'

		import_specifier: do choice
			field('name', $1.identifier)
			seq
				field('name', $1._module_export_name)
				'as'
				field('alias', $1.identifier)
		
		decorator_call_expression: do prec 'call', seq
			field 'function', choice
				$1.identifier,
				alias($1.decorator_member_expression, $1.member_expression)
			field('arguments', $1.arguments)

		arguments: do seq
			'('
			commaSep optional choice $1.expression_statement, $1.spread_element
			')'

		parenless_args: do prec.left seq
			commaSep1 $1.expression_statement
			$1._newline

		decorator_member_expression: do prec 'member', seq
			field 'object', choice
				$1.identifier
				alias($1.decorator_member_expression, $1.member_expression)
			'.'
			field('property', alias($1.identifier, $1.property_identifier))

		export_statement: do prec.right choice
			seq
				'export',
				choice
					seq('*', $1._from_clause),
					seq($1.namespace_export, $1._from_clause),
					seq($1.export_clause, $1._from_clause),
					$1.export_clause
				optional ';'
			seq
				repeat(field('decorator', $1.decorator))
				'export'
				choice
					field('declaration', $1.declaration)
					seq
						'default'
						choice
							field('declaration', $1.declaration)
							seq
								field('value', $1.expression_statement)
								optional ';'
		
		import_statement: do prec.right seq
			'import'
			choice
				seq($1.import_clause, $1._from_clause)
				field('source', $1.string)
			optional ';'

		_from_clause: do seq
			"from"
			field('source', $1.string)
			
		if_statement: do seq
			choice('if', 'unless')
			field('condition', $1.expression_statement)
			field('consequence', $1._suite)

		_tag_element: do choice
			$1.tag_element
			$1.self_closing_tag_element

		tag_element: do seq
			'<'
			field 'name', $1._tag_element_name
			repeat field 'attribute', $1._tag_attribute
			'>'
		
		tag_fragment: do seq '<', '>'
		self_closing_tag_element: do seq
			'<'
			field 'name', $1._tag_element_name
			repeat field 'attribute', $1._tag_attribute
			'/'
			'>'

		_tag_element_name: do choice
			$1._tag_identifier
			# $1.tag_expression_identifier # <{args.attr()}>
			
		_tag_identifier: do /[a-zA-Z_][a-zA-Z\d_-]*[a-zA-Z\d_\-]*/
		
		_tag_attribute: do choice
			$1.tag_attribute
			# $1.tag_expression
			
		tag_attribute: do seq
			choice
				$1._tag_attribute_name
				# $1.inline_style
			optional seq
				'='
				$1._tag_attribute_value

		_tag_attribute_name: do choice
			alias $1._tag_identifier, $1.property_identifier
			# $1.tag_namespace_name
		
		_tag_attribute_value: do choice
			$1.string
			$1.tag_expression
			$1._tag_element
			$1.tag_fragment

		tag_expression: do choice
			$1.expression_statement
			$1.spread_element
			# $1.sequence_expression

		expression_statement: do choice
			$1.primary_expression
			# $1.glimmer_template
			$1._tag_element
			$1.tag_fragment
			$1.assignment_expression
			$1.augmented_assignment_expression
			# $1.await_expression
			# $1.unary_expression
			# $1.binary_expression
			# $1.ternary_expression
			# $1.update_expression
			# $1.new_expression
			# $1.yield_expression

		assignment_expression: do prec.right('assign', seq
			field('left', choice(
				$1.parenthesized_expression
				$1._lhs_expression
			))
			'='
			field('right', $1.expression_statement)
		)

		_augmented_assignment_lhs: do choice
			$1.member_expression
			$1.subscript_expression
			alias($1._reserved_identifier, $1.identifier)
			$1.identifier
			$1.parenthesized_expression
		

		parenthesized_expression: do seq
			'(',
			$1.expression_statement,
			')'
		
		augmented_assignment_expression: do prec.right 'assign', seq
			field('left', $1._augmented_assignment_lhs),
			field('operator', choice('+=', '-=', '*=', '/=', '%=', '^=', '&=', '|=', '>>=', '>>>=', '<<=', '**=', '&&=', '||=', '??=')),
			field('right', $1.expression_statement)

		
		_identifier: do choice($1.undefined, $1.identifier)


		primary_expression: do choice(
			$1.subscript_expression
			$1.member_expression
			$1.parenthesized_expression
			$1._identifier
			alias($1._reserved_identifier, $1.identifier)
			$1.this
			$1.super
			$1.number
			$1.string
			# $1.template_string
			# $1.regex
			$1.true
			$1.yes
			$1.no
			$1.false
			$1.null
			$1.import
			$1.object
			$1.array
			$1.function_declaration
			# $1.function
			$1.arrow_function
			# $1.generator_function
			# $1.class
			# $1.meta_property
			$1.call_expression,
		)
		
		call_expression: do choice
			prec 'call', seq
				field('function', $1.expression_statement),
				field 'arguments', choice
					$1.arguments
					# $1.parenless_args
					# $1.template_string
			prec 'member', seq
				field('function', $1.primary_expression)
				field('optional_chain', $1.optional_chain)
				field('arguments', $1.arguments)

		# template_string: do seq
		# 	'`'
		# 	repeat choice
		# 		$1._template_chars
		# 		$1.escape_sequence
		# 		$1.template_substitution
		# 	'`'

		object: do prec 'object', choice
			seq
				'{'
				commaSep optional choice
					$1.pair,
					$1.spread_element,
					$1.method_definition,
					alias
						choice($1.identifier, $1._reserved_identifier)
						$1.shorthand_property_identifier
				'}'
			seq
				$1._indent
				newlineCommaSep $1, choice
					$1.pair,
					$1.spread_element,
					$1.method_definition,
					alias
						choice($1.identifier, $1._reserved_identifier)
						$1.shorthand_property_identifier
				$1._dedent

			seq
				'{'
				$1._indent
				newlineCommaSep $1, choice
					$1.pair,
					$1.spread_element,
					$1.method_definition,
					alias
						choice($1.identifier, $1._reserved_identifier)
						$1.shorthand_property_identifier
				$1._dedent
				'}'

		pair: do seq
			field('key', $1._property_name)
			':'
			field('value', $1.expression_statement)

		spread_element: do seq('...', $1.expression_statement)

		
		declaration: do choice
			$1.function_declaration
			# $1.generator_function_declaration
			$1.class_declaration
			$1.lexical_declaration
			$1.variable_declaration

		
		variable_declaration: do prec.left seq
			'var',
			commaSep1($1.variable_declarator),
			optional ";"

		lexical_declaration: do prec.left seq
			field('kind', choice('let', 'const')),
			commaSep1($1.variable_declarator),
			optional ";"
		
		variable_declarator: do seq
			field('name', choice($1.identifier, $1._destructuring_pattern)),
			optional($1._initializer)

		function_declaration: do prec 1, seq
			'def'
			field('name', $1.identifier)
			optional field('parameters', $1.formal_parameters)
			field('body', $1.statement_block)	
		
		_initializer: do seq 
			'='
			field 'value', $1.expression_statement
		
		array: do choice
			seq
				'['
				commaSep optional choice 
					$1.expression_statement
					$1.spread_element
				']'
			seq
				'['
				$1._indent
				repeat1 prec.left seq
					choice $1.expression_statement, $1.spread_element
					optional ','
					$1._newline
				$1._dedent
				']'
		class_declaration: do choice
			seq
				'class'
				field('name', $1.identifier)
				optional($1.class_heritage)
				$1._newline
			seq
				# repeat(field('decorator', $1.decorator))
				'class'
				field('name', $1.identifier)
				optional($1.class_heritage)
				field('body', $1.class_body)
				$1._dedent
				# optional($1._automatic_semicolon)

		class_heritage: do seq(field('extends', '<'), $1.expression_statement)

		class_body: do seq(
			$1._indent
			repeat choice(
				seq(field('member', $1.method_definition))
				# seq(field('member', $1.m_d))
				seq(field('member', $1.setter))
				seq(field('member', $1.getter))
				seq(field('member', $1.field_definition))
				# field('member', $1.class_static_block)
				# field('template', $1.glimmer_template)
			)
		)

		getter: do seq(
			'get'
			field('name', $1._property_name)
			field('body', $1.statement_block)
		)

		setter: do prec 1, seq(
			'set'
			field('name', $1._property_name)
			optional field('parameters', $1.formal_parameters)
			field('body', $1.statement_block)	
		)


		# m_d: do seq
		# 	optional('static')
		# 	'def'
		# 	field('name', $1._property_name)

		method_definition: do prec 1, seq(
			# repeat(field('decorator', $1.decorator))
			optional('static')
			'def'
			field('name', $1._property_name)
			optional field('parameters', $1.formal_parameters)
			field('body', $1.statement_block)	
		)

		field_definition: do seq(
			# repeat(field('decorator', $1.decorator)),
			optional('static'),
			optional 'prop'
			field('property', $1._property_name),
			# optional($1._initializer)
		)
		_statement_block: do seq
			$1._indent
			repeat($1.statement)
			$1._dedent	

		arrow_function: do prec.left choice
			seq
				'do('
				alias
					seq 
						commaSep1 $1._formal_parameter
						optional ','
					$1.formal_parameters
				')'
				field 'body', $1.expression_statement
			seq 'do', field 'body', choice
				$1.expression_statement
				$1._statement_block
		
		statement_block: do choice(
			$1.arrow_function,
			$1._statement_block
		)
		
		formal_parameters: do prec.left choice(
			seq('(', seq(commaSep1($1._formal_parameter), optional(',')) , ')')
			seq( commaSep1($1._formal_parameter), optional(',')) 
		)

		_formal_parameter: do choice($1.pattern, $1.assignment_pattern)


		# This negative dynamic precedence ensures that during error recovery,
		# unfinished constructs are generally treated as literal expressions,
		# not patterns.
		pattern: do prec.dynamic(-1, choice(
			$1._lhs_expression,
			$1.rest_pattern
		))

		array_pattern: do seq
			'['
			commaSep optional choice 
				$1.pattern
				$1.assignment_pattern
			']'


		assignment_pattern: do seq(
			field('left', $1.pattern),
			'=',
			field('right', $1.expression_statement)
		)
		
		_lhs_expression: do choice(
			$1.member_expression,
			$1.subscript_expression,
			$1._identifier,
			alias($1._reserved_identifier, $1.identifier),
			# $1._destructuring_pattern
		),	

		rest_pattern: do prec.right(seq(
			'...',
			$1._lhs_expression
		)),

		object_pattern: do prec 'object', seq
			'{'
			commaSep optional choice
				$1.pair_pattern
				$1.rest_pattern
				$1.object_assignment_pattern
				alias
					choice($1.identifier, $1._reserved_identifier)
					$1.shorthand_property_identifier_pattern
			'}'

		pair_pattern: do seq
			field('key', $1._property_name),
			':',
			field('value', choice($1.pattern, $1.assignment_pattern))
	
		object_assignment_pattern: do seq
			field('left', choice(
				alias(choice($1._reserved_identifier, $1.identifier), $1.shorthand_property_identifier_pattern),
				$1._destructuring_pattern
			)),
			'=',
			field('right', $1.expression_statement)
	
		_destructuring_pattern: do choice
			$1.object_pattern,
			$1.array_pattern

	
		member_expression: do prec('member', seq(
			field('object', choice($1.expression_statement, $1.primary_expression))
			choice('.', field('optional_chain', $1.optional_chain))
			field('property', choice(
				$1.private_property_identifier,
				alias($1.identifier, $1.property_identifier))
			)
		))

		subscript_expression: do prec.right('member', seq(
			field('object', choice($1.expression_statement, $1.primary_expression))
			optional(field('optional_chain', $1.optional_chain))
			'[', field('index', $1.expression_statement), ']'
		))

		optional_chain: do ".."

		computed_property_name: do seq
			'['
			$1.expression_statement
			']'
		
		_property_name: do choice(
			alias(choice(
				$1.identifier,
				$1._reserved_identifier
			), $1.property_identifier),
			$1.private_property_identifier,
			$1.string,
			$1.number,
			$1.computed_property_name	
		)

		_reserved_identifier: do choice(
			'def'
			# 'get'
			# 'set'
			# 'async'
			# 'static'
			'export'
		)
	
		
		identifier: do
			const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
			const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
			token
				seq(
					alpha
					optional('-')
					repeat seq alphanumeric, optional('-')
					optional '?'
				)
			# je identifiers
			# return token(seq(alpha, repeat(seq (alphanumeric)))

		private_property_identifier: do
			const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
			const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
			token
				seq(
					'#'
					alpha
					optional('-')
					repeat seq alphanumeric, optional('-')
					optional '?'
				)
			# je identifiers
			# return token(seq(alpha, repeat(seq (alphanumeric)))

		true: do 'true'
		false: do 'false'
		yes: do 'yes'
		no: do 'no'
		null: do 'null'
		this: do 'this'
		super: do 'super'
		import: do token('import')
		undefined: do 'undefined'


		unescaped_double_string_fragment: do token.immediate(prec(1, /[^"\\]+/))

		unescaped_single_string_fragment: do token.immediate(prec(1, /[^'\\]+/))

		escape_sequence: do token.immediate seq
			'\\'
			choice
				/[^xu0-7]/
				/[0-7]{1,3}/
				/x[0-9a-fA-F]{2}/
				/u[0-9a-fA-F]{4}/
				/u{[0-9a-fA-F]+}/

			
		string: do choice(
			seq(
				'"',
				repeat(choice(
					alias($1.unescaped_double_string_fragment, $1.string_fragment),
					$1.escape_sequence
				)),
				'"'
			),
			seq(
				"'",
				repeat(choice(
					alias($1.unescaped_single_string_fragment, $1.string_fragment),
					$1.escape_sequence
				)),
				"'"
			)
		),


		number: do
			const hex_literal = seq(choice("0x", "0X"), /[\da-fA-F](_?[\da-fA-F])*/)
			const decimal_digits = /\d(_?\d)*/
			const signed_integer = seq(optional(choice("-", "+")), decimal_digits)
			const exponent_part = seq(choice("e", "E"), signed_integer)
			const binary_literal = seq(choice("0b", "0B"), /[0-1](_?[0-1])*/)
			const octal_literal = seq(choice("0o", "0O"), /[0-7](_?[0-7])*/)

			const bigint_literal = seq
				choice(hex_literal, binary_literal, octal_literal, decimal_digits)
				"n"

			const decimal_integer_literal = choice
				"0"
				seq
					optional("0")
					/[1-9]/
					optional seq(optional("_"), decimal_digits)
					
			const decimal_literal = choice
				seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part))
				seq('.', decimal_digits, optional(exponent_part))
				seq(decimal_integer_literal, exponent_part)
				seq(decimal_digits)

			return token(choice(hex_literal, decimal_literal, binary_literal, octal_literal, bigint_literal))
		# _keyword_variable: do choice(

		# 	$1.true
		# 	$1.yes
		# 	$1.no
		# 	$1.false
		# 	$1.undefined
		# 	$1.null									
		# )
		# _terminator: do choice(
		# 	"\n",
		# 	';'
		# )

		# _statement: do choice(
		# 	$1._simple_statements
		# 	$1._compound_statement
		# )

		# _compound_statement: do choice(
		# 	$1.if_statement
		# )
		# _expression: do "expression"
		_suite: do choice(
			# alias($1._simple_statement, $1.block) # this is for python's if a: b ?
			
			seq($1._indent, $1.block)
			# alias($1._newline, $1.block) # what is this one for?
		)

		block: do seq(
			repeat1 $1.statement
			$1._dedent
		)
		
		# _simple_statement: do choice(
		# 	$1.continue_statement
		# 	$1.comment
		# )

		# _simple_statements: do seq(
		# 	sep1 $1._simple_statement, SEMICOLON
		# 	optional SEMICOLON
		# 	$1._newline
		# )

		# continue_statement: do "continue"

		comment: do choice
			token seq('# ', /.*/)
			# seq
			# 	/#{3,}/
			# 	/^(?:(?!###)[\s\S])*$/
			# 	/#{3,}/
