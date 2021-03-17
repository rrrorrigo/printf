# Project: 0x11. C - printf
create our own printf function

<h2>_printf</h2>	

The _printf function reflects the functionality of the print function from the C library. It includes the conversion specifiers c, s, %, d, i and rot13.

For example:

#include "holberton.h"

_printf("Why, sometimes I've believed as many as **%d** impossible things before **%s**.", 6, "breakfast");
)

Output:

<em>Why, sometimes I've believed as many as 6 impossible things before breakfast."</em>


# Mandatory task
## 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.

Prototype: `int _printf(const char *format, ...);`
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
`format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
`c`
`s`
`%`
You dont have to reproduce the buffer handling of the C library `printf` function
You dont have to handle the flag characters
You dont have to handle field width
You dont have to handle precision
You dont have to handle the length modifiers

## 1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:

`d`
`i`
You dont have to handle the flag characters
You dont have to handle field width
You dont have to handle precision
You dont have to handle the length modifiers

## 2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.

<H1>Project Requirements</h1>
<ol>
<li>Allowed editors: vi, vim, emacs
<li>All your files will be compiled on Ubuntu 14.04 LTS
<li>Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
<li>All your files should end with a new line
<li>A README.md file, at the root of the folder of the project is mandatory
<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
<li>You are not allowed to use global variables
<li>No more than 5 functions per file
<li>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
<li>The prototypes of all your functions should be included in your header file called holberton.h
<li>Don’t forget to push your header file
<li>All your header files should be include guarded
<li>Note that we will not provide the _putchar function for this project<br>
<br>

<h1>Functions and Files:</h1>

<ul>
<li>_printNumber.c
<ul>
<li>int _int(va_list up) - prints an int
<li>int _unsignedInt(va_list up) - prints and unsigned int
</ul>
<li>_printString.c
<ul>
<li>int _char(va_list - prints a char
<li>int _string(va_list up) - prints a string
<li>int _sign(__attribute__((unused)) va_list up) - prints percentage symbol
</ul>
</ul>
<ul>
<li>_puchar.c -  prints char
</ul>
<ul>
<li>_rot13.c - prints the rot13'ed string
<li>_write.c - writes the character c to stdout
<li> man_3_printf.3.gz - man page
<li>_printf.c - custom function
</ul>

<h1>Notes</h1>
This function does not handle flag characters, field width, precision nor length modifiers.
<br>
<br>
<h1>Authors</h1>

:angel: Alina de los Santos :angel: and :smiling_imp: Rodrigo Briones :smiling_imp:



