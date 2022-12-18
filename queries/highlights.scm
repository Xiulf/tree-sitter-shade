(func name: (identifier) @function)
(const name: (identifier) @constant)
(static name: (identifier) @constant)
(type name: (identifier) @type)
(class name: (identifier) @type)
(ctor name: (identifier) @constructor)
(typevar) @variable

(import (path (identifier) @namespace))
(module (path (identifier) @namespace))
(export (path (identifier) @namespace))

((export (identifier) @type)
  (#match? @type "^[A-Z]"))
(export (identifier) @function)

(((pat_identifier) @constructor)
  (#match? @constructor "^[A-Z]"))
(pat_identifier) @variable

((import_item (identifier) @type)
  (#match? @type "^[A-Z]"))
(import_item (identifier) @function)

((expr_infix operator: (path last: (identifier) @constructor))
  (#match? @constructor "^[A-Z]"))
(expr_infix operator: (path last: (identifier) @function))

(expr_app first: (expr_field (identifier) @function))
(expr_field (identifier) @property)

((expr_app first: (path last: (identifier) @constructor))
  (#match? @constructor "^[A-Z]"))
(expr_app first: (path last: (identifier) @function))

((ty_path last: (identifier) @type)
  (#match? @type "^[A-Z]"))
(ty_path last: (identifier) @identifier)

((path last: (identifier) @constructor)
  (#match? @constructor "^[A-Z]"))
(path ":" last: (identifier) @function)
(path last: (identifier) @identifier)
(path (module_name) @namespace)

(expr_case "of" @keyword.control.conditional)

(record_field (identifier) @property)

"module" @keyword
"import" @keyword.control.import
"prefix" @keyword
"infix" @keyword
"infixl" @keyword
"infixr" @keyword
"postfix" @keyword
"as" @keyword
"foreign" @keyword
"type" @keyword
"fn" @keyword.function
"const" @keyword
"static" @keyword
"class" @keyword
"member" @keyword
"where" @keyword
"forall" @keyword.control.repeat
"of" @keyword
"do" @keyword
"try" @keyword
"let" @keyword
"if" @keyword.control.conditional
"then" @keyword.control.conditional
"else" @keyword.control.conditional
"case" @keyword.control.conditional
(recur) @function.builtin

(int_literal) @constant.numeric.integer
(string_literal) @string
(attribute) @attribute
(operator) @operator
(symbol) @operator
(comment) @comment
