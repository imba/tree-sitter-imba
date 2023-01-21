const SEMICOLON = ';'

def sep1 rule, separator
	seq rule, repeat(seq(separator, rule))

module.exports = grammar
	name: "imba"

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
		# $1.declaration
		$1.expression
		$1.primary_expression
		# $1.pattern
	]


	### inline
	# an array of rule names that should be automatically removed from the
	# grammar by replacing all of their usages with a copy of their definition.
	# This is useful for rules that are used in multiple places but for which
	# you don’t want to create syntax tree nodes at runtime.
	###
	# inline: do [
	# 	$1._call_signature
	# 	$1._formal_parameter
	# 	$1.statement
	# 	$1._expressions
	# 	$1._semicolon
	# 	$1._identifier
	# 	$1._reserved_identifier
	# 	$1._jsx_attribute
	# 	$1._jsx_element_name
	# 	$1._jsx_child
	# 	$1._jsx_element
	# 	$1._jsx_attribute_name
	# 	$1._jsx_attribute_value
	# 	$1._jsx_identifier
	# 	$1._lhs_expression
	# ],


	### precedences
	# an array of array of strings, where each array of strings defines named precedence levels in descending order.
	# These names can be used in the prec functions to define precedence relative only to other names 
	# in the array, rather than globally. Can only be used with parse precedence, not lexical precedence.
	###
	# precedences: do [
	# 	[
	# 		'member'
	# 		'call'
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
	# 	],
	# 	['assign', $1.primary_expression]
	# 	['member', 'new', 'call', $1.expression]
	# 	['declaration', 'literal']
	# 	[$1.primary_expression, $1.statement_block, 'object']
	# 	[$1.import_statement, $1.import]
	# 	[$1.export_statement, $1.primary_expression]
	# ],


	### extras
	# an array of tokens that may appear anywhere in the language.
	# This is often used for whitespace and comments.
	# The default value of extras is to accept whitespace.
	# To control whitespace explicitly, specify extras: $ => [] in your grammar.
	###
	extras: do [
		$1.comment
		# python whitespace
		# didn't test this yet
		/[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
		# js whitespace
		# /[\s\p{Zs}\uFEFF\u2060\u200B]/
	]
	rules:
		program: do repeat $1.statement
		
		statement: do choice
			$1.if_statement
			$1.expression
			
		if_statement: do seq
			choice('if', 'unless')
			field('condition', $1.expression)
			field('consequence', $1._suite)

		expression: do choice
			$1.primary_expression


		primary_expression: do choice
			$1.true
			$1.false
			$1.yes
			$1.no
			$1.null
			

		true: do 'true'
		false: do 'false'
		yes: do 'yes'
		no: do 'no'
		null: do 'null'

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
