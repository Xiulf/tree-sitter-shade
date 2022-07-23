(func name: (identifier) @function)
(type name: (identifier) @type)
(class name: (identifier) @type)
(ctor name: (identifier) @constructor)

(expr_app first: (path) @function)

(attribute) @attribute
(operator) @operator
(comment) @comment
(identifier) @identifier

"module" @keyword
"import" @keyword
"prefix" @keyword
"infix" @keyword
"infixl" @keyword
"infixr" @keyword
"postfix" @keyword
"as" @keyword
"type" @keyword
"fn" @keyword
"class" @keyword
"member" @keyword
"of" @keyword
"let" @keyword
"if" @keyword
"then" @keyword
"else" @keyword
(recur) @keyword

(int_literal) @constant.builtin
(string_literal) @string
