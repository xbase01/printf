_printf
_printf is a custom implementation of the standard C library function printf. It produces output according to a format, similar to the standard printf function. The goal of this project is to create a function that produces output according to a format using only the write system call and the specifiers included in the functionality of the project.
Usage
The function _printf takes in a format string, similar to the standard printf function. It can also take in additional arguments, depending on the format specifiers in the format string.
_printf("Hello, %s!", "world");
This will output "Hello, world!"
Compilation
The code can be compiled with the following command:
gcc --Wall -Werror -Wextra -pedantic -std=gnu89 \*.c
This will compile all the files in the current directory that end in .c, with the flags specified.
Functionality
The format string is composed of zero or more directives. The following conversion specifiers are supported:
•	%c - print a single character
•	%s - print a string of characters
•	%% - print a literal '%' character
•	%d or %i - print a signed decimal integer
•	%b - print an unsigned int in binary (custom conversion specifier)
•	%u - print an unsigned decimal integer
•	%o - print an unsigned octal integer
•	%x - print an unsigned hexadecimal integer (using lowercase letters)
•	%X - print an unsigned hexadecimal integer (using uppercase letters)
•	%S - print a string of characters, with non-printable characters represented in the form of '\x, followed by the ASCII code value in hexadecimal (custom conversion specifier)
•	%p - print a pointer address in hexadecimal
•	%+ - print a sign character for positive numbers
•	% space - print a space character before positive numbers
•	%# - print a prefix for octal and hexadecimal numbers
It also handles the following flag characters for non-custom conversion specifiers:
•	space
•	0
Limitations
_printf does not handle the following features of the standard printf function:
•	Buffering
•	Field width
•	Precision
•	Length modifiers
•	Flag characters (other than those specified above)
Example
#include "main.h"
int main(void)
{
    _printf("%d in hex is %x\n", 100, 100);
    return (0);
}
This will output "100 in hex is 64" to the console.
File Structure
The project consists of the following files:
main.c - contains the main function and the _printf function
main.h - contains the function prototypes and structs used in the project
holberton.h - contains the standard library functions used in the project
Tests
The project includes test files to ensure proper functionality. These files can be found in the tests directory and can be executed using the provided Makefile.
Collaboration
This project was completed as a team effort by Lizzy and Jude. All team members contributed to the design and implementation of the _printf function.
