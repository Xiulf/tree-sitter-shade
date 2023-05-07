(module_item (module_name) @namespace)
(import_item (module_name) @namespace)
(value_item (identifier) @function)
(value_item (constant) @constant)
(type_item (type_name) @type)
(trait_item (type_name) @type)
(ctor (type_name) @constructor)
(ctor (constant) @constant)
; (typevar) @variable

(export (identifier) @function)
(export (constant) @constant)
(export (type_name) @type)
(export "module" (type_name) @namespace)

(import_item (identifier) @function)
(import_item (constant) @constant)
(import_item (type_name) @type)
(import_item "as" (type_name) @namespace)
(import_item (imported_item (identifier) @function))
(import_item (imported_item (constant) @constant))
(import_item (imported_item (type_name) @type))

(type_path (type_name) @namespace)
(type_path last: (type_name) @type)
(type_infix "," @operator)

(pat_path (type_name) @namespace)
(pat_path last: (type_name) @constructor)

(path (type_name) @namespace)
(path last: (type_name) @constructor)
(path last: (identifier) @function)
(path last: (constant) @constant)

(expr_path (path last: (identifier) @variable))
(expr_app first: (expr_path (path last: (identifier) @function)))
(expr_pipe method: (path last: (identifier) @function))
(expr_pipe (expr_path (path last: (identifier) @function)) "<|")
(expr_match "with" @keyword.control.conditional)
(expr_recur) @keyword.function

"module" @include
"import" @include
"hiding" @keyword
"as" @keyword
"infix" @keyword
"infixl" @keyword
"infixr" @keyword
"prefix" @keyword
"postfix" @keyword
"foreign" @keyword
"type" @keyword
"trait" @keyword
"impl" @keyword
"where" @keyword
"ref" @keyword
"do" @keyword
"let" @keyword
"fn" @keyword.function
"if" @keyword.control.conditional
"then" @keyword.control.conditional
"else" @keyword.control.conditional
"match" @keyword.control.conditional
"return" @keyword.control.conditional

"|>" @operator
"<|" @operator
(expr_pipe "." @operator)

(lit_int) @constant.numeric.integer
(lit_string) @string
(escape_sequence) @escape

(attribute (identifier) @attribute)
(operator) @operator
(symbol) @operator
(comment) @comment
