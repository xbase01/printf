<h1>_printf</h1>
<p>_printf is a custom implementation of the standard C library function printf. It produces output according to a format, similar to the standard printf function. The goal of this project is to create a function that produces output according to a format using only the write system call and the specifiers included in the functionality of the project.</p>
<h2>Usage</h2>
<p>The function _printf takes in a format string, similar to the standard printf function. It can also take in additional arguments, depending on the format specifiers in the format string.</p>
<p>_printf("Hello, %s!", "world");<br>
This will output "Hello, world!"</p>
<h2>Compilation</h2>
The code can be compiled with the following command:
gcc --Wall -Werror -Wextra -pedantic -std=gnu89 \*.c
This will compile all the files in the current directory that end in .c, with the flags specified.
<h2>Functionality</h2>
The format string is composed of zero or more directives. The following conversion specifiers are supported:
<ul>
<li>%c - print a single character</li>
<li>%s - print a string of characters</li>
<li>%% - print a literal '%' character</li>
<li>%d or %i - print a signed decimal integer</li>
<li>%b - print an unsigned int in binary (custom conversion specifier)</li>
<li>%u - print an unsigned decimal integer</li>
<li>%o - print an unsigned octal integer</li>
<li>%x - print an unsigned hexadecimal integer (using lowercase letters)</li>
<li>%X - print an unsigned hexadecimal integer (using uppercase letters)</li>
<li>%S - print a string of characters, with non-printable characters represented in the form of '\x, followed by the ASCII code value in hexadecimal (custom conversion specifier)</li>
<li>%p - print a pointer address in hexadecimal</li>
<li>%+ - print a sign character for positive numbers</li>
<li>% space - print a space character before positive numbers</li>
<li>%# - print a prefix for octal and hexadecimal numbers</li>
</ul>
<p>It also handles the following flag characters for non-custom conversion specifiers:</p>
<ul>
<li>space</li>
<li>0</li>
</ul>
<h2>Limitations</h2>
<p>_printf does not handle the following features of the standard printf function:</p>
<ul>
<li>Buffering</li>
<li>Field width</li>
<li>Precision</li>
<li>Length modifiers</li>
<li>Flag characters (other than those specified above)</li>
</ul>
<h2>Example</h2>
<p>#include "main.h"
int main(void)
{
    _printf("%d in hex is %x\n", 100, 100);
    return (0);
}
This will output "100 in hex is 64" to the console.</p>
<h2>File Structure</h2>
The project consists of the following files:
main.c - contains the main function and the _printf function
main.h - contains the function prototypes and structs used in the project
holberton.h - contains the standard library functions used in the project
<h2>Tests</h2>
<p>The project includes test files to ensure proper functionality. These files can be found in the tests directory and can be executed using the provided Makefile.</p>
<h2>Collaboration</h2>
<p>This project was completed as a team effort by Lizzy Sekhu and Jude Aneke. All team members contributed to the design and implementation of the _printf function.</p>
