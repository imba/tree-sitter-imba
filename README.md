# tree-sitter-imba

## Installation With Helix

1. Clone, install, and build tree-sitter-imba:

	```
	cd ~/Desktop
	git clone https://github.com/imba/tree-sitter-imba.git
	cd tree-sitter-imba
	npm i
	npm run build
	```

1. Find helix runtime path

	```
	hx --health | grep runtime
	```

1. `cd` to it, then `cd queries`.

1. Symlink tree-sitter-imba/queries

	```
	ln -s /path/to/tree-sitter-imba/queries/ imba
	```

1. Add `imba` to `~/.config/languages.toml`

	```
	[[language]]
	name = "imba"
	auto-format = false
	scope = "source.imba"
	file-types = ["imba", "imba1"]
	comment-token = "#"
	indent = { tab-width = 2, unit = "\t"}
	roots = [ "package.json" ]

	[[grammar]]
	name = "imba"
	source = { path = "/Users/user/Desktop/tree-sitter-imba" }
	```

1. Fetch and build the grammars:

	```
	hx --grammar fetch
	hx --grammar build
	```
