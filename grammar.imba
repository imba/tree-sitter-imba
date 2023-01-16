module.exports = grammar
	name: "imba"
	rules:
		program: do repeat($1._definition)
		_definition: do choice(
			$1.comment
		)

		comment: do /#\s.*/