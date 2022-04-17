0x10. C - printf
Description
This team project is part of the first year curriculum of Holberton School. _printf replicates the C standard library printf() function.

What you should learn from this project:

How to use git in a team setting
Applying variadic functions to a big project
The complexities of printf
Managing a lot of files and finding a good workflow
Prototype
int _printf(const char *format, ...);

Usage
Prints a string to the standard output, according to a given format
All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command gcc -Wall -Werror -Wextra -pedantic *.c
Returns the number of characters in the output string on success, -1 otherwise
Call it this way: _printf("format string", arguments...) where format string can contain conversion specifiers and flags, along with regular characters
Examples
_printf("Hello, Holberton\n") prints "Hello, Holberton", followed by a new line
_printf("%s", "Hello") prints "Hello"
_printf("This is a number: %d", 98) prints "This is a number: 98"

Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

   
1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

   
2. Just because it's in print doesn't mean it's the gospel
mandatory
Create a man page for your function.

Repo:

GitHub repository: printf
File: man_3_printf
 
3. With a face like mine, I do better in print
#advanced
Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$

  
4. What one has not experienced, one will never understand in print
#advanced
Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

   
5. Nothing in fine print is ever good news
#advanced
Use a local buffer of 1024 chars in order to call write as little as possible.   
7. My weakness is wearing too much leopard print
#advanced
Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Best\x0ASchool
alex@ubuntu:~/c/printf$

  
6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
#advanced
Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
   
8. The big print gives and the small print takes away
#advanced
Handle the following flag characters for non-custom conversion specifiers:

+
space
#
   
9. Sarcasm is lost in print
#advanced
Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X

   
10. Print some money and give it to us for the rain forests
#advanced
Handle the field width for non-custom conversion specifiers.
   
11. The negative is the equivalent of the composer's score, and the print the performance
#advanced
Handle the precision for non-custom conversion specifiers.
   
12. It's depressing when you're still around and your albums are out of print
#advanced
Handle the 0 flag character for non-custom conversion specifiers.
   
13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
#advanced
Handle the - flag character for non-custom conversion specifiers.
   
14. Print is the sharpest and the strongest weapon of our party
#advanced
Handle the following custom conversion specifier:

r : prints the reversed string

   
15. The flood of print has turned reading into a process of gulping rather than savoring
#advanced
Handle the following custom conversion specifier:

R: prints the rot13'ed string
   
16. *
#advanced
All the above options work well together.