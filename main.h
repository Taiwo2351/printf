#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flag -flag object
 * @letter: flag char
 * @prnt: print function pointer
 * Descriptions: contains flag letter and corresponding print function
 **/
typedef struct flag
{
	char letter;
	int (*prnt)(va_list *);
} find_flag;

/* prototype for thr _printf() function */
int _printf(const char *format, ...);

/* prototype for the print_function() function */
int print_function(char c, va_list *args);

/* prototype for the p_string() function */
int p_string(char *s);

/* prototype for the _write() function */
int _write(char c);
int p_int(int number);
int exponent(int x, int y);
int p_bin(unsigned int num);

/* prototype for the print_string() function */
int print_string(va_list *args);

/* prototype for the print_char() function */
int print_char(va_list *args);
int print_int(va_list *args);
int print_bin(va_list *args);

#endif
