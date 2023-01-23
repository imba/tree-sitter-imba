
/*body*/
const SEMICOLON = ';';

function sep1(rule,separator){
	
	return seq(rule,repeat(seq(separator,rule)));
};

module.exports = grammar(
	{name: "imba",
	
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
		_0.expression,
		_0.primary_expression
	// $1.pattern
	]; },
	
	
	/* inline
		# an array of rule names that should be automatically removed from the
		# grammar by replacing all of their usages with a copy of their definition.
		# This is useful for rules that are used in multiple places but for which
		# you don’t want to create syntax tree nodes at runtime.
		*/
	
	inline: function(_0) { return [
		// 	$1._call_signature
		// 	$1._formal_parameter
		_0.statement,_0._identifier,
		_0._reserved_identifier
	]; },
	
	
	/* precedences
		# an array of array of strings, where each array of strings defines named precedence levels in descending order.
		# These names can be used in the prec functions to define precedence relative only to other names 
		# in the array, rather than globally. Can only be used with parse precedence, not lexical precedence.
		*/
	
	precedences: function() { return [
		// [
		// 		'member'
		// 		'call'
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
		// 	],
		// 	['assign', $1.primary_expression]
		// 	['member', 'new', 'call', $1.expression]
		['declaration','literal']
	]; },
	
	
	/* extras
		# an array of tokens that may appear anywhere in the language.
		# This is often used for whitespace and comments.
		# The default value of extras is to accept whitespace.
		# To control whitespace explicitly, specify extras: $ => [] in your grammar.
		*/
	
	extras: function(_0) { return [
		_0.comment,
		// python whitespace
		// didn't test this yet
		/[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
	// js whitespace
	// /[\s\p{Zs}\uFEFF\u2060\u200B]/
	]; },
	rules: {
		program: function(_0) { return repeat(_0.statement); },
		
		statement: function(_0) { return choice(
			// $1.export_statement
						// $1.import_statement
						// $1.debugger_statement
						_0.expression,
			_0.declaration,
			// $1.statement_block
			
			_0.if_statement
		// $1.switch_statement
		// $1.for_statement
		// $1.for_in_statement
		// $1.while_statement
		// $1.do_statement
		// $1.try_statement
		// $1.with_statement
		
		// $1.break_statement
		// $1.continue_statement
		// $1.return_statement
		// $1.throw_statement
		// $1.empty_statement
		// $1.labeled_statement
		
		); },
		if_statement: function(_0) { return seq(
			choice('if','unless'),
			field('condition',_0.expression),
			field('consequence',_0._suite)
		); },
		
		expression: function(_0) { return choice(
			_0.primary_expression
		); },
		
		_identifier: function(_0) { return choice(_0.undefined,_0.identifier); },
		
		
		primary_expression: function(_0) { return choice(
			// $1.subscript_expression
						// $1.member_expression
						// $1.parenthesized_expression
						_0._identifier,
			alias(_0._reserved_identifier,_0.identifier),
			_0.this,
			_0.super,
			// $1.number
			// $1.string
			// $1.template_string
			// $1.regex
			_0.true,
			_0.yes,
			_0.no,
			_0.false,
			_0.null,
			_0.import
		// $1.object
		// $1.array
		// $1.function
		// $1.arrow_function
		// $1.generator_function
		// $1.class
		// $1.meta_property
		// $1.call_expression,
		); },
		
		declaration: function(_0) { return choice(
			// $1.function_declaration
						// $1.generator_function_declaration
						_0.class_declaration
		// $1.lexical_declaration
		// $1.variable_declaration
		); },
		
		class_declaration: function(_0) { return seq(
			// repeat(field('decorator', $1.decorator))
						'class',
			field('name',_0.identifier),
			optional(_0.class_heritage),
			field('body',_0.class_body),
			_0._dedent
		// optional($1._automatic_semicolon)
		); },
		
		class_heritage: function(_0) { return seq(field('extends','<'),_0.expression); },
		
		class_body: function(_0) { return seq(
			_0._indent,
			repeat(choice(
				// seq(field('member', $1.method_definition))
								seq(field('member',_0.field_definition))
			// field('member', $1.class_static_block)
			// field('template', $1.glimmer_template)
			))
		); },
		
		field_definition: function(_0) { return seq(
			// repeat(field('decorator', $1.decorator)),
						optional('static'),
			field('property',_0._property_name)
		// optional($1._initializer)
		); },
		
		_property_name: function(_0) { return choice(
			alias(choice(
				_0.identifier,
				_0._reserved_identifier
			),_0.property_identifier)
		// $1.private_property_identifier,
		// $1.string,
		// $1.number,
		// $1.computed_property_name	
		); },
		
		_reserved_identifier: function() { return choice(
			// 'get'
						// 'set'
						// 'async'
						// 'static'
						'export'
		); },
		
		
		identifier: function() {
			
			const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
			const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
			return token(seq(alpha,repeat(alphanumeric)));
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
