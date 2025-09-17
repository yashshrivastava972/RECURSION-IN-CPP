# Aim: To Study & Implement Recursion.

# Tool: VS CODE.

# Theory: 

### What is Recursion?

Recursion is a programming technique in which a function calls itself either directly or indirectly to solve a problem.
It is mainly used when a problem can be broken down into smaller sub-problems of the same type.

### Types of Recursion

Direct Recursion → Function calls itself directly.

Indirect Recursion → Function A calls Function B, and Function B calls Function A.

### Structure of a Recursive Function

A recursive function must have:

Base Case → Condition to stop recursion.

Recursive Case → Function calling itself with reduced input.

•	Recursion in C++ is a technique in which a function calls itself repeatedly until a given condition is satisfied.

•	A function that calls itself is called a recursive function. 

•	When a recursive function is called, it executes a set of instructions and then calls itself to execute the same set of instructions with a smaller input. 

•	This process continues until a base case is reached, which is a condition that stops the recursion and returns a value.

### Properties of Recursion:

Performing the same operations multiple times with different inputs.

In every step, we try smaller inputs to make the problem smaller.

A base condition is needed to stop the recursion otherwise infinite loop will occur.

### Advantages of Recursion

Code becomes simpler and closer to mathematical definitions.

Useful for problems like factorial, Fibonacci, Tower of Hanoi, tree traversals.

### Disadvantages of Recursion

More memory usage (each function call is stored in the call stack).

Slower execution compared to iteration.

Must always include a base case, otherwise infinite recursion occurs.

# Algorithms:

## Algorithm: Factorial using Recursion

Start

Declare an integer variable num.

Define a recursive function fact(n):

If n <= 1, return 1. (Base case)

Else, return n * fact(n-1). (Recursive case)

In main() function:

Display message: "Enter a number:".

Read input and store it in num.

Call the recursive function: fact(num).

Display the result as "Factorial of num is result".

Stop

## Algorithm: Sum of Integers up to N using Recursion

Start

Declare an integer variable num.

Define a recursive function sumup(n):

If n <= 0, return 0. (Base case)

Else, return n + sumup(n-1). (Recursive case)

In main() function:

Display message: "Enter a number:".

Read input and store it in num.

Call the recursive function: sumup(num).

Display the result as "Sum of integers up to num is result".

Stop

## Algorithm: Reverse a String using Recursion

Start

Declare a character array str[100].

Define a recursive function print_rev(str):

If the current character *str is not '\0' (end of string):

Call print_rev(str + 1) to move to the next character.

Print the current character *str when the function returns.

Else (if *str == '\0'), stop recursion. (Base case)

In main() function:

Display message: "Enter a string:".

Read input string into str.

Display message: "Reversed string:".

Call print_rev(str).

Stop

## Algorithm: Reverse an Integer using Recursion

Start

Declare an integer variable num.

Define a recursive function print_rev(i):

If i > 0:

Print the last digit using i % 10.

Call print_rev(i / 10) to continue with the remaining digits.

Else (when i == 0), stop recursion. (Base case)

In main() function:

Display message: "Enter an integer:".

Read input number into num.

Display message: "Reversed integer:".

Call print_rev(num).

Stop

# Conclusion

Recursion in C++ is a powerful concept where a function calls itself to solve smaller subproblems.
It makes programs shorter and elegant, but should be used carefully due to memory and performance issues.
