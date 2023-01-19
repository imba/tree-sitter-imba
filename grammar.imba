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
	
	rules:
		program: do repeat $1._statement
		

		true: do 'true'
		yes: do 'yes'
		no: do 'no'
		false: do 'false'
		undefined: do 'undefined'
		null: do 'null'

		_keyword_variable: do choice(

			$1.true
			$1.yes
			$1.no
			$1.false
			$1.undefined
			$1.null									
		)
		_terminator: do choice(
			"\n",
			';'
		)

		_statement: do choice(
			$1._simple_statements
			$1._compound_statement
		)

		_compound_statement: do choice(
			$1.if_statement
		)
		_expression: do "expression"
		
		if_statement: do seq(
			choice('if', 'unless')
			field('condition', $1._simple_statement)
			field('consequence', $1._suite)
		)

		_suite: do choice(
			# alias($1._simple_statement, $1.block) # this is for python's if a: b ?
			
			seq($1._indent, $1.block)
			# alias($1._newline, $1.block) # what is this one for?
		)

		block: do seq(
			repeat1 $1._statement
			$1._dedent
		)
		
		_simple_statement: do choice(
			$1.continue_statement
			$1.comment
		)

		_simple_statements: do seq(
			sep1 $1._simple_statement, SEMICOLON
			optional SEMICOLON
			$1._newline
		)

		continue_statement: do "continue"

		comment: do token seq('#', /.*/)

