
/*body*/
module.exports = grammar(
	{name: "imba",
	rules: {
		program: function(_0) { return repeat(_0._definition); },
		_definition: function(_0) { return choice(
			_0.comment
		); },
		
		comment: function() { return /#\s.*/; }
	}}
);
