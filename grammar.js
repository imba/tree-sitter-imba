
/*body*/
function newlineCommaSep(_,rule){
	
	return seq(
		rule,
		repeat(seq(
			// _._newline
						seq(optional(','),_._newline),
			rule
		))
	);
	// seq(rule, repeat(seq(seq(optional(","), _._newline), rule)))
};

function commaSep1(rule){
	
	return seq(rule,repeat(seq(",",rule)));
};

function commaSep(rule){
	
	return optional(commaSep1(rule));
};

function sep1(rule,separator){
	
	return seq(rule,repeat(seq(separator,rule)));
};

module.exports = grammar(
	{name: "imba",
	
	conflicts: function(_0) { return [
		// []
				// check later
				[_0.call_expression,_0.program],
		[_0.call_expression,_0._statement_block],
		[_0.call_expression,_0._initializer],
		[_0.arguments,_0.parenthesized_expression],
		// [$1.parenthesized_expression, $1.arguments]
		// [$1.call_expression, $1.parenless_args]
		// [$1.call_expression, $1.assignment_pattern]
		// [$1.call_expression, $1.parenless_args, $1.member_expression, $1.subscript_expression]
		// [$1.parenless_args, $1.member_expression, $1.subscript_expression]
		// [$1.parenless_args, $1.member_expression]
		// [$1.parenless_args, $1.subscript_expression]
		
		[_0.primary_expression,_0._property_name],
		[_0.primary_expression,_0._property_name,_0.arrow_function],
		[_0.primary_expression,_0.arrow_function],
		[_0.primary_expression,_0.method_definition],
		[_0.primary_expression,_0.rest_pattern],
		[_0.primary_expression,_0.pattern],
		// [$1.primary_expression, $1._for_header],
		[_0.array,_0.array_pattern],
		[_0.object,_0.object_pattern],
		[_0.assignment_expression,_0.pattern],
		[_0.assignment_expression,_0.object_assignment_pattern],
		// [$1.labeled_statement, $1._property_name],
		// [$1.computed_property_name, $1.array],
		// [$1.binary_expression, $1._initializer],
		[_0.declaration,_0.primary_expression],
		[_0.subscript_expression,_0.arrow_function],
		[_0.program,_0.subscript_expression],
		[_0._statement_block,_0.subscript_expression],
		[_0._initializer,_0.subscript_expression]
	]; },
	
	externals: function(_0) { return [
		_0._newline,
		_0._indent,
		_0._dedent
	]; },
	/* supertypes:
		# an array of hidden rule names which should 
		# be considered to be ‘supertypes’ in the generated node types file
		*/
	
	supertypes: function(_0) { return [
		_0.statement,
		_0.declaration,
		_0.expression_statement,
		_0.primary_expression,
		_0.pattern
	]; },
	
	
	/* inline
		# an array of rule names that should be automatically removed from the
		# grammar by replacing all of their usages with a copy of their definition.
		# This is useful for rules that are used in multiple places but for which
		# you don’t want to create syntax tree nodes at runtime.
		*/
	
	inline: function(_0) { return [
		_0._call_signature,
		_0._formal_parameter,
		_0.statement,
		_0.expression_statement,_0._identifier,
		_0._reserved_identifier,
		_0._tag_attribute,
		_0._tag_element_name,_0._tag_element,
		_0._tag_attribute_name,
		_0._tag_attribute_value,
		// $1._tag_identifier
		_0._lhs_expression
	]; },
	
	
	/* precedences
		# an array of array of strings, where each array of strings defines named precedence levels in descending order.
		# These names can be used in the prec functions to define precedence relative only to other names 
		# in the array, rather than globally. Can only be used with parse precedence, not lexical precedence.
		*/
	
	precedences: function(_0) { return [
		[
			'member',
			'call'
		// 		$1.update_expression
		// 		'unary_void'
		// 		'binary_exp'
		// 		'binary_times'
		// 		'binary_plus'
		// 		'binary_shift'
		// 		'binary_compare'
		// 		'binary_relation'
		// 		'binary_equality'
		// 		'bitwise_and'
		// 		'bitwise_xor'
		// 		'bitwise_or'
		// 		'logical_and'
		// 		'logical_or'
		// 		'ternary'
		// 		$1.sequence_expression
		// 		$1.arrow_function
		],
		['assign',_0.primary_expression],
		['member','new','call',_0.expression_statement],
		['declaration','literal'],
		[_0.assignment_expression,_0.pattern],[_0.primary_expression,_0.statement_block,'object'],
		// [$1._inline_statement_block, $1.subscript_expression]
		[_0.import_statement,_0.import],
		[_0.export_statement,_0.primary_expression],
		[_0.tag_attribute,_0.tag_expression,_0.primary_expression]
	]; },
	
	
	/* extras
		# an array of tokens that may appear anywhere in the language.
		# This is often used for whitespace and comments.
		# The default value of extras is to accept whitespace.
		# To control whitespace explicitly, specify extras: do [] in your grammar.
		*/
	
	extras: function(_0) { return [
		_0.comment,
		// python whitespace
		// didn't test this yet
		/[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
	// js whitespace
	// /[\s\p{Zs}\uFEFF\u2060\u200B]/
	]; },
	
	word: function(_0) { return _0.identifier; },
	
	
	rules: {
		program: function(_0) { return repeat(seq(_0.statement,optional(";"))); },
		
		debugger_statement: function() { return 'debugger'; },
		break_statement: function() { return 'break'; },
		continue_statement: function() { return 'continue'; },
		
		statement: function(_0) { return choice(
			_0.export_statement,
			_0.import_statement,
			_0.debugger_statement,
			_0.expression_statement,
			_0.declaration,
			_0.statement_block,
			
			_0.if_statement,
			// $1.switch_statement
			// $1.for_statement
			// $1.for_in_statement
			// $1.while_statement
			// $1.do_statement
			// $1.try_statement
			// $1.with_statement
			
			_0.break_statement,
			_0.continue_statement,
			_0.return_statement
		// $1.throw_statement
		// $1.empty_statement
		// $1.labeled_statement
		); },
		
		namespace_export: function(_0) { return seq(
			'*','as',_0._module_export_name
		); },
		
		_module_export_name: function(_0) { return choice(
			_0.identifier,
			_0.string
		); },
		
		export_clause: function(_0) { return seq(
			'{',
			commaSep(_0.export_specifier),
			optional(','),
			'}'
		); },
		
		export_specifier: function(_0) { return seq(
			field('name',_0._module_export_name),
			optional(seq(
				'as',
				field('alias',_0._module_export_name)
			))
		); },
		
		return_statement: function(_0) { return prec.right(2,seq(
			'return',
			optional(_0.expression_statement)
		)); },
		
		decorator: function(_0) { return seq(
			'@',
			choice(
				_0.identifier,
				alias(_0.decorator_member_expression,_0.member_expression),
				alias(_0.decorator_call_expression,_0.call_expression)
			)
		); },
		import_clause: function(_0) { return choice(
			_0.namespace_import,
			_0.named_imports,
			seq(
				_0.identifier,
				optional(seq(
					',',
					choice(
						_0.namespace_import,
						_0.named_imports
					)
				))
			)
		); },
		
		namespace_import: function(_0) { return seq(
			"*","as",_0.identifier
		); },
		
		
		named_imports: function(_0) { return seq(
			'{',
			commaSep(_0.import_specifier),
			optional(','),
			'}'
		); },
		
		import_specifier: function(_0) { return choice(
			field('name',_0.identifier),
			seq(
				field('name',_0._module_export_name),
				'as',
				field('alias',_0.identifier)
			)
		); },
		
		decorator_call_expression: function(_0) { return prec('call',seq(
			field('function',choice(
				_0.identifier,
				alias(_0.decorator_member_expression,_0.member_expression)
			)),
			field('arguments',_0.arguments)
		)); },
		
		arguments: function(_0) { return seq(
			'(',
			commaSep(optional(choice(_0.expression_statement,_0.spread_element))),
			')'
		); },
		
		parenless_args: function(_0) { return prec.left(seq(
			commaSep1(_0.expression_statement),
			_0._newline
		)); },
		
		decorator_member_expression: function(_0) { return prec('member',seq(
			field('object',choice(
				_0.identifier,
				alias(_0.decorator_member_expression,_0.member_expression)
			)),
			'.',
			field('property',alias(_0.identifier,_0.property_identifier))
		)); },
		
		export_statement: function(_0) { return prec.right(choice(
			seq(
				'export',
				choice(
					seq('*',_0._from_clause),
					seq(_0.namespace_export,_0._from_clause),
					seq(_0.export_clause,_0._from_clause),
					_0.export_clause
				),
				optional(';')
			),
			seq(
				repeat(field('decorator',_0.decorator)),
				'export',
				choice(
					field('declaration',_0.declaration),
					seq(
						'default',
						choice(
							field('declaration',_0.declaration),
							seq(
								field('value',_0.expression_statement),
								optional(';')
							)
						)
					)
				)
			)
		)); },
		
		import_statement: function(_0) { return prec.right(seq(
			'import',
			choice(
				seq(_0.import_clause,_0._from_clause),
				field('source',_0.string)
			),
			optional(';')
		)); },
		
		_from_clause: function(_0) { return seq(
			"from",
			field('source',_0.string)
		
		); },
		if_statement: function(_0) { return seq(
			choice('if','unless'),
			field('condition',_0.expression_statement),
			field('consequence',_0._suite)
		); },
		
		_tag_element: function(_0) { return choice(
			_0.tag_element,
			_0.self_closing_tag_element
		); },
		
		tag_element: function(_0) { return seq(
			'<',
			field('name',_0._tag_element_name),
			repeat(field('attribute',_0._tag_attribute)),
			'>'
		); },
		
		tag_fragment: function() { return seq('<','>'); },
		self_closing_tag_element: function(_0) { return seq(
			'<',
			field('name',_0._tag_element_name),
			repeat(field('attribute',_0._tag_attribute)),
			'/',
			'>'
		); },
		
		_tag_element_name: function(_0) { return choice(
			_0._tag_identifier
		// $1.tag_expression_identifier # <{args.attr()}>
		
		); },
		_tag_identifier: function() { return /[a-zA-Z_][a-zA-Z\d_-]*[a-zA-Z\d_\-]*/; },
		
		_tag_attribute: function(_0) { return choice(
			_0.tag_attribute
		// $1.tag_expression
		
		); },
		tag_attribute: function(_0) { return seq(
			choice(
				_0._tag_attribute_name
			// $1.inline_style
			),
			optional(seq(
				'=',
				_0._tag_attribute_value
			))
		); },
		
		_tag_attribute_name: function(_0) { return choice(
			alias(_0._tag_identifier,_0.property_identifier)
		// $1.tag_namespace_name
		); },
		
		_tag_attribute_value: function(_0) { return choice(
			_0.string,
			_0.tag_expression,
			_0._tag_element,
			_0.tag_fragment
		); },
		
		tag_expression: function(_0) { return choice(
			_0.expression_statement,
			_0.spread_element
		// $1.sequence_expression
		); },
		
		expression_statement: function(_0) { return choice(
			_0.primary_expression,
			// $1.glimmer_template
			_0._tag_element,
			_0.tag_fragment,
			_0.assignment_expression,
			_0.augmented_assignment_expression
		// $1.await_expression
		// $1.unary_expression
		// $1.binary_expression
		// $1.ternary_expression
		// $1.update_expression
		// $1.new_expression
		// $1.yield_expression
		); },
		
		assignment_expression: function(_0) { return prec.right('assign',seq(
			field('left',choice(
				_0.parenthesized_expression,
				_0._lhs_expression
			)),
			'=',
			field('right',_0.expression_statement)
		)); },
		
		_augmented_assignment_lhs: function(_0) { return choice(
			_0.member_expression,
			_0.subscript_expression,
			alias(_0._reserved_identifier,_0.identifier),
			_0.identifier,
			_0.parenthesized_expression
		); },
		
		
		parenthesized_expression: function(_0) { return seq(
			'(',
			_0.expression_statement,
			')'
		); },
		
		augmented_assignment_expression: function(_0) { return prec.right('assign',seq(
			field('left',_0._augmented_assignment_lhs),
			field('operator',choice('+=','-=','*=','/=','%=','^=','&=','|=','>>=','>>>=','<<=','**=','&&=','||=','??=')),
			field('right',_0.expression_statement)
		)); },
		
		
		_identifier: function(_0) { return choice(_0.undefined,_0.identifier); },
		
		
		primary_expression: function(_0) { return choice(
			_0.subscript_expression,
			_0.member_expression,
			_0.parenthesized_expression,
			_0._identifier,
			alias(_0._reserved_identifier,_0.identifier),
			_0.this,
			_0.super,
			_0.number,
			_0.string,
			// $1.template_string
			// $1.regex
			_0.true,
			_0.yes,
			_0.no,
			_0.false,
			_0.null,
			_0.import,
			_0.object,
			_0.array,
			_0.function_declaration,
			// $1.function
			_0.arrow_function,
			// $1.generator_function
			// $1.class
			// $1.meta_property
			_0.call_expression
		); },
		
		call_expression: function(_0) { return choice(
			prec('call',seq(
				field('function',_0.expression_statement),
				field('arguments',choice(
					_0.arguments
				// $1.parenless_args
				// $1.template_string
				))
			)),
			prec('member',seq(
				field('function',_0.primary_expression),
				field('optional_chain',_0.optional_chain),
				field('arguments',_0.arguments)
			))
		); },
		
		// template_string: do seq
		// 	'`'
		// 	repeat choice
		// 		$1._template_chars
		// 		$1.escape_sequence
		// 		$1.template_substitution
		// 	'`'
		
		object: function(_0) { return prec('object',choice(
			seq(
				'{',
				commaSep(optional(choice(
					_0.pair,
					_0.spread_element,
					_0.method_definition,
					alias(
						choice(_0.identifier,_0._reserved_identifier),
						_0.shorthand_property_identifier
					)
				))),
				'}'
			),
			seq(
				_0._indent,
				newlineCommaSep(_0,choice(
					_0.pair,
					_0.spread_element,
					_0.method_definition,
					alias(
						choice(_0.identifier,_0._reserved_identifier),
						_0.shorthand_property_identifier
					)
				)),
				_0._dedent
			),
			
			seq(
				'{',
				_0._indent,
				newlineCommaSep(_0,choice(
					_0.pair,
					_0.spread_element,
					_0.method_definition,
					alias(
						choice(_0.identifier,_0._reserved_identifier),
						_0.shorthand_property_identifier
					)
				)),
				_0._dedent,
				'}'
			)
		)); },
		
		pair: function(_0) { return seq(
			field('key',_0._property_name),
			':',
			field('value',_0.expression_statement)
		); },
		
		spread_element: function(_0) { return seq('...',_0.expression_statement); },
		
		
		declaration: function(_0) { return choice(
			_0.function_declaration,
			// $1.generator_function_declaration
			_0.class_declaration,
			_0.lexical_declaration,
			_0.variable_declaration
		); },
		
		
		variable_declaration: function(_0) { return prec.left(seq(
			'var',
			commaSep1(_0.variable_declarator),
			optional(";")
		)); },
		
		lexical_declaration: function(_0) { return prec.left(seq(
			field('kind',choice('let','const')),
			commaSep1(_0.variable_declarator),
			optional(";")
		)); },
		
		variable_declarator: function(_0) { return seq(
			field('name',choice(_0.identifier,_0._destructuring_pattern)),
			optional(_0._initializer)
		); },
		
		function_declaration: function(_0) { return prec(1,seq(
			'def',
			field('name',_0.identifier),
			optional(field('parameters',_0.formal_parameters)),
			field('body',_0.statement_block)
		)); },
		
		_initializer: function(_0) { return seq(
			'=',
			field('value',_0.expression_statement)
		); },
		
		array: function(_0) { return choice(
			seq(
				'[',
				commaSep(optional(choice(
					_0.expression_statement,
					_0.spread_element
				))),
				']'
			),
			seq(
				'[',
				_0._indent,
				repeat1(prec.left(seq(
					choice(_0.expression_statement,_0.spread_element),
					optional(','),
					_0._newline
				))),
				_0._dedent,
				']'
			)
		); },
		class_declaration: function(_0) { return choice(
			seq(
				'class',
				field('name',_0.identifier),
				optional(_0.class_heritage),
				_0._newline
			),
			seq(
				// repeat(field('decorator', $1.decorator))
								'class',
				field('name',_0.identifier),
				optional(_0.class_heritage),
				field('body',_0.class_body),
				_0._dedent
			// optional($1._automatic_semicolon)
			)
		); },
		
		class_heritage: function(_0) { return seq(field('extends','<'),_0.expression_statement); },
		
		class_body: function(_0) { return seq(
			_0._indent,
			repeat(choice(
				seq(field('member',_0.method_definition)),
				// seq(field('member', $1.m_d))
				seq(field('member',_0.setter)),
				seq(field('member',_0.getter)),
				seq(field('member',_0.field_definition))
			// field('member', $1.class_static_block)
			// field('template', $1.glimmer_template)
			))
		); },
		
		getter: function(_0) { return seq(
			'get',
			field('name',_0._property_name),
			field('body',_0.statement_block)
		); },
		
		setter: function(_0) { return prec(1,seq(
			'set',
			field('name',_0._property_name),
			optional(field('parameters',_0.formal_parameters)),
			field('body',_0.statement_block)
		)); },
		
		
		// m_d: do seq
		// 	optional('static')
		// 	'def'
		// 	field('name', $1._property_name)
		
		method_definition: function(_0) { return prec(1,seq(
			// repeat(field('decorator', $1.decorator))
						optional('static'),
			'def',
			field('name',_0._property_name),
			optional(field('parameters',_0.formal_parameters)),
			field('body',_0.statement_block)
		)); },
		
		field_definition: function(_0) { return seq(
			// repeat(field('decorator', $1.decorator)),
						optional('static'),
			optional('prop'),
			field('property',_0._property_name)
		// optional($1._initializer)
		); },
		_statement_block: function(_0) { return seq(
			_0._indent,
			repeat(_0.statement),
			_0._dedent
		); },
		
		arrow_function: function(_0) { return prec.left(choice(
			seq(
				'do(',
				alias(
					seq(
						commaSep1(_0._formal_parameter),
						optional(',')
					),
					_0.formal_parameters
				),
				')',
				field('body',_0.expression_statement)
			),
			seq('do',field('body',choice(
				_0.expression_statement,
				_0._statement_block
			)))
		)); },
		
		statement_block: function(_0) { return choice(
			_0.arrow_function,
			_0._statement_block
		); },
		
		formal_parameters: function(_0) { return prec.left(choice(
			seq('(',seq(commaSep1(_0._formal_parameter),optional(',')),')'),
			seq(commaSep1(_0._formal_parameter),optional(','))
		)); },
		
		_formal_parameter: function(_0) { return choice(_0.pattern,_0.assignment_pattern); },
		
		
		// This negative dynamic precedence ensures that during error recovery,
		// unfinished constructs are generally treated as literal expressions,
		// not patterns.
		pattern: function(_0) { return prec.dynamic(-1,choice(
			_0._lhs_expression,
			_0.rest_pattern
		)); },
		
		array_pattern: function(_0) { return seq(
			'[',
			commaSep(optional(choice(
				_0.pattern,
				_0.assignment_pattern
			))),
			']'
		); },
		
		
		assignment_pattern: function(_0) { return seq(
			field('left',_0.pattern),
			'=',
			field('right',_0.expression_statement)
		); },
		
		_lhs_expression: function(_0) { return choice(
			_0.member_expression,
			_0.subscript_expression,
			_0._identifier,
			alias(_0._reserved_identifier,_0.identifier)
		// $1._destructuring_pattern
		); },
		
		rest_pattern: function(_0) { return prec.right(seq(
			'...',
			_0._lhs_expression
		)); },
		
		object_pattern: function(_0) { return prec('object',seq(
			'{',
			commaSep(optional(choice(
				_0.pair_pattern,
				_0.rest_pattern,
				_0.object_assignment_pattern,
				alias(
					choice(_0.identifier,_0._reserved_identifier),
					_0.shorthand_property_identifier_pattern
				)
			))),
			'}'
		)); },
		
		pair_pattern: function(_0) { return seq(
			field('key',_0._property_name),
			':',
			field('value',choice(_0.pattern,_0.assignment_pattern))
		); },
		
		object_assignment_pattern: function(_0) { return seq(
			field('left',choice(
				alias(choice(_0._reserved_identifier,_0.identifier),_0.shorthand_property_identifier_pattern),
				_0._destructuring_pattern
			)),
			'=',
			field('right',_0.expression_statement)
		); },
		
		_destructuring_pattern: function(_0) { return choice(
			_0.object_pattern,
			_0.array_pattern
		); },
		
		
		member_expression: function(_0) { return prec('member',seq(
			field('object',choice(_0.expression_statement,_0.primary_expression)),
			choice('.',field('optional_chain',_0.optional_chain)),
			field('property',choice(
				_0.private_property_identifier,
				alias(_0.identifier,_0.property_identifier)
			))
		)); },
		
		subscript_expression: function(_0) { return prec.right('member',seq(
			field('object',choice(_0.expression_statement,_0.primary_expression)),
			optional(field('optional_chain',_0.optional_chain)),
			'[',field('index',_0.expression_statement),']'
		)); },
		
		optional_chain: function() { return ".."; },
		
		computed_property_name: function(_0) { return seq(
			'[',
			_0.expression_statement,
			']'
		); },
		
		_property_name: function(_0) { return choice(
			alias(choice(
				_0.identifier,
				_0._reserved_identifier
			),_0.property_identifier),
			_0.private_property_identifier,
			_0.string,
			_0.number,
			_0.computed_property_name
		); },
		
		_reserved_identifier: function() { return choice(
			'def',
			// 'get'
			// 'set'
			// 'async'
			// 'static'
			'export'
		); },
		
		
		identifier: function() {
			
			const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
			const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
			return token(
				seq(
					alpha,
					optional('-'),
					repeat(seq(alphanumeric,optional('-'))),
					optional('?')
				)
			);
			// je identifiers
			// return token(seq(alpha, repeat(seq (alphanumeric)))
		},
		
		private_property_identifier: function() {
			
			const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
			const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
			return token(
				seq(
					'#',
					alpha,
					optional('-'),
					repeat(seq(alphanumeric,optional('-'))),
					optional('?')
				)
			);
			// je identifiers
			// return token(seq(alpha, repeat(seq (alphanumeric)))
		},
		
		true: function() { return 'true'; },
		false: function() { return 'false'; },
		yes: function() { return 'yes'; },
		no: function() { return 'no'; },
		null: function() { return 'null'; },
		this: function() { return 'this'; },
		super: function() { return 'super'; },
		import: function() { return token('import'); },
		undefined: function() { return 'undefined'; },
		
		
		unescaped_double_string_fragment: function() { return token.immediate(prec(1,/[^"\\]+/)); },
		
		unescaped_single_string_fragment: function() { return token.immediate(prec(1,/[^'\\]+/)); },
		
		escape_sequence: function() { return token.immediate(seq(
			'\\',
			choice(
				/[^xu0-7]/,
				/[0-7]{1,3}/,
				/x[0-9a-fA-F]{2}/,
				/u[0-9a-fA-F]{4}/,
				/u{[0-9a-fA-F]+}/
			)
		
		)); },
		string: function(_0) { return choice(
			seq(
				'"',
				repeat(choice(
					alias(_0.unescaped_double_string_fragment,_0.string_fragment),
					_0.escape_sequence
				)),
				'"'
			),
			seq(
				"'",
				repeat(choice(
					alias(_0.unescaped_single_string_fragment,_0.string_fragment),
					_0.escape_sequence
				)),
				"'"
			)
		); },
		
		
		number: function() {
			
			const hex_literal = seq(choice("0x","0X"),/[\da-fA-F](_?[\da-fA-F])*/);
			const decimal_digits = /\d(_?\d)*/;
			const signed_integer = seq(optional(choice("-","+")),decimal_digits);
			const exponent_part = seq(choice("e","E"),signed_integer);
			const binary_literal = seq(choice("0b","0B"),/[0-1](_?[0-1])*/);
			const octal_literal = seq(choice("0o","0O"),/[0-7](_?[0-7])*/);
			
			const bigint_literal = seq(
				choice(hex_literal,binary_literal,octal_literal,decimal_digits),
				"n"
			);
			
			const decimal_integer_literal = choice(
				"0",
				seq(
					optional("0"),
					/[1-9]/,
					optional(seq(optional("_"),decimal_digits))
				
				)
			);
			const decimal_literal = choice(
				seq(decimal_integer_literal,'.',optional(decimal_digits),optional(exponent_part)),
				seq('.',decimal_digits,optional(exponent_part)),
				seq(decimal_integer_literal,exponent_part),
				seq(decimal_digits)
			);
			
			return token(choice(hex_literal,decimal_literal,binary_literal,octal_literal,bigint_literal));
		},
		// _keyword_variable: do choice(
		
		// 	$1.true
		// 	$1.yes
		// 	$1.no
		// 	$1.false
		// 	$1.undefined
		// 	$1.null									
		// )
		// _terminator: do choice(
		// 	"\n",
		// 	';'
		// )
		
		// _statement: do choice(
		// 	$1._simple_statements
		// 	$1._compound_statement
		// )
		
		// _compound_statement: do choice(
		// 	$1.if_statement
		// )
		// _expression: do "expression"
		_suite: function(_0) { return choice(
			// alias($1._simple_statement, $1.block) # this is for python's if a: b ?
						
						seq(_0._indent,_0.block)
		// alias($1._newline, $1.block) # what is this one for?
		); },
		
		block: function(_0) { return seq(
			repeat1(_0.statement),
			_0._dedent
		); },
		
		// _simple_statement: do choice(
		// 	$1.continue_statement
		// 	$1.comment
		// )
		
		// _simple_statements: do seq(
		// 	sep1 $1._simple_statement, SEMICOLON
		// 	optional SEMICOLON
		// 	$1._newline
		// )
		
		// continue_statement: do "continue"
		
		comment: function() { return choice(
			token(seq('# ',/.*/))
		// seq
		// 	/#{3,}/
		// 	/^(?:(?!###)[\s\S])*$/
		// 	/#{3,}/
		); }
	}}
);
