# tree-sitter-imba

## Working on the grammar
    tldr; run `npm run only`, you should get a failing test. Fix it, that's the current focus (tags atm.). This grammar uses javascript grammar token names (except expression -> expression_statement. I forgot why). You can safely copy paste and adapt.

### Test driven development
	This is the recommended way most of the time.
	- Start by writing a failing test case in `test/corpus/XXX.txt` (statements, literals or expressions or tags).
	- Write the code you want to test and the expected parse tree.
	- For help, you can go to https://tree-sitter.github.io/tree-sitter/playground, choose a language (JavaScript?) 
		and write your code there. Parentheses are on you for now :) 
	- `npm run test --watch` is your friend
    - to run a specific test containing "only" : `npm run test --watch -- -f only`
    - to debug a specific test: `npm run test --watch -- -d -f only`

### Debugging
	- In order to debug indentation logic, check the scanner code, add print statements and (if you know how) add 
	breakpoints in C code and step through them by using a C debugger. Something like this should work:
	```
		lldb ./node_modules/tree-sitter-cli/tree-sitter parse test/test.imba
	```
	- To debug the rest, check the logs when running `npm run dev`
	- Or even better, run `npm run wasm && npm run playground` to open the playground 
		(check log and open the console as well).
        
## Installation
- Clone, install, and build tree-sitter-imba:
	```
	cd ~/Desktop
	git clone https://github.com/imba/tree-sitter-imba.git
	cd tree-sitter-imba
	npm i
	npm run build
	```

<details>
<summary>## Installation With Helix</summary>
<br>
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
</details>
