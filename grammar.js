
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
	
	rules: {
		program: function(_0) { return repeat(_0._statement); },
		
		
		true: function() { return 'true'; },
		yes: function() { return 'yes'; },
		no: function() { return 'no'; },
		false: function() { return 'false'; },
		undefined: function() { return 'undefined'; },
		null: function() { return 'null'; },
		
		_keyword_variable: function(_0) { return choice(
			
			_0.true,
			_0.yes,
			_0.no,
			_0.false,
			_0.undefined,
			_0.null
		); },
		_terminator: function() { return choice(
			"\n",
			';'
		); },
		
		_statement: function(_0) { return choice(
			_0._simple_statements,
			_0._compound_statement
		); },
		
		_compound_statement: function(_0) { return choice(
			_0.if_statement
		); },
		_expression: function() { return "expression"; },
		
		if_statement: function(_0) { return seq(
			choice('if','unless'),
			field('condition',_0._simple_statement),
			field('consequence',_0._suite)
		); },
		
		_suite: function(_0) { return choice(
			// alias($1._simple_statement, $1.block) # this is for python's if a: b ?
						
						seq(_0._indent,_0.block)
		// alias($1._newline, $1.block) # what is this one for?
		); },
		
		block: function(_0) { return seq(
			repeat1(_0._statement),
			_0._dedent
		); },
		
		_simple_statement: function(_0) { return choice(
			_0.continue_statement,
			_0.comment
		); },
		
		_simple_statements: function(_0) { return seq(
			sep1(_0._simple_statement,SEMICOLON),
			optional(SEMICOLON),
			_0._newline
		); },
		
		continue_statement: function() { return "continue"; },
		
		comment: function() { return token(seq('#',/.*/)); }
	}}
);

