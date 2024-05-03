# C
02-05-2024

>## Intro

### syntex = set of rule for a code
### ASCLL - American Standard For Inform
### First released in 1972 by Dennis Ritenie 
### Sructure (or) procedural 
### pointer oriented 
---
>## COMPUTER TRANSLATER:
+ Assembley Level - Low Level (ALP - MOV A,B)
+ compiled - High Level (C, Java)
+ Interpreted - High Lvl (Python, Js)

---
> ## Structure

```c
#include <stdio.h> // header

int main () // function
{
    // body
}
```
### header (# - Preprocessor Detector)
```c
// # - first the c looks this code and perform 
// preprocessor copies the preprocessed code of stdio.h to our file

/* In C,  all lines that start with the pound (#) sign are called directives. These statements are processed by preprocessor program invoked by the compiler.

The #include directive tells the compiler to include a file and #include<stdio.h> tells the compiler to include the header file for the Standard Input Output file which contains declarations of all the standard input/output library functions.*/

#include<stdio.h>
```
`stddef.h – Defines several useful types and macros`

`stdint.h – Defines exact width integer types`

`stdio.h – Defines core input and output functions`

`stdlib.h – Defines numeric conversion functions` `pseudo-random number generator, and memory allocation`

`string.h – Defines string handling functions`

`math.h – Defines common mathematical functions`

### + function (function data type with data name )
```c
// example of function

// int div(//data type of arg and name of arg)
int div(int a, int b)

int main()

/* n C++, both fun() and fun(void) are same.
So the difference is, in C, int main() can be called with any number of arguments, but int main(void) can only be called without any argument. Although it doesn’t make any difference most of the times, using “int main(void)” is a recommended practice in C.*/

#include <stdio.h>
int main()
{
	static int i = 5;
	if (--i) {
		printf("%d", i);
		main(10);
	}
}

--> output = 4321

#include <stdio.h>
int main(void)
{
	static int i = 5;
	if (--i) {
		printf("%d", i);
		main(10);
	}
}
---> output = error
```
### + function body - code
```c
{
    //we can declare variables( name is called identifier)
    //we can do control flow (conditions, looping)
    //a statement is always terminated by a semicolon (;)
    // manipulations, searching, sorting, printing, etc

}
```
> # Most Important Features of C Language

- Procedural Language
- Fast and Efficient
- Modularity
- Statically Type
- General-Purpose Language
- Rich set of built-in Operators
- Libraries with Rich Functions
- Middle-Level Language
- Portability
- Easy to Extend

> # Compiling a C Program: Behind the Scenes

### Step 1: Creating a C Source File (.c)
### Step 2: Compiling using GCC compiler
- Pre-processing (.i)
-`Removal of Comments`,`Expansion of Macros`,`Expansion of the included files`,`Conditional compilation`
- Compilation (.s)
- Assembly (.o)
- Linking(executable)

### Step 3: Executing the program

> # C Comments

### Single-line comment `//`

### Multi-line comment `/* */`

> # Tokens in C - basic

## 1. keywords in c
### + reserved word we can't use this words as identifiers
### + 32 reserved words
`auto` `break` `case` `char` `const` `continue` `default` `do` `double` `else` `enum` `extern` `float` `for` `goto` `if` `int` `long` `register` `return` `short` `signed` `sizeof` `static` `struct` `switch` `typedef` `union` `unsigned` `void` `volatile` `while`

## 2. Operators

## + unary operators(1)

### Unary ---> increment `++` decrement `--` 

## + Binary operators(2)

### Arithmetic `+` `-` `/` `*` `%`
### Relational `<` `>` `<=` `=>` `==` `!=`
### Logical `&&` `||` `!`
### Bitwise `&` `|` `<<` `>>` `~` `^`
### assignment `=` `+=` `-=` `*=` `/=` `%=`

## + Ternary(3)
### conditio or tenary `(condition) ? if : else;`

## + sign bit(`0 ---> (+) posisitve`, `1 ---> (-) negative`) 

## + Unsigned

## 3. 