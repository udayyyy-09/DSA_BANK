# Evaluate Reverse Polish Notation

You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.

Note that:

- The valid operators are '+', '-', '*', and '/'.
- Each operand may be an integer or another expression.
- The division between two integers always truncates toward zero.
- There will not be any division by zero.
- The input represents a valid arithmetic expression in a reverse polish notation.
- The answer and all the intermediate calculations can be represented in a 32-bit integer.

# Insight

In this question you want to add int in stack not string as we want int value and first I think of storing string in stack then for each operation I push two string from stack then convert it into char then to int which is not significiant approahc 

- Main thing is I forget stoi which directly use to convert string to int 
- Store int values in stack and perform reverse notation means for ex: ["2","2","3","+","-"] 
    - 2+3 = 5 
    - 2 - 5 = -3 
- Return stack.top()
