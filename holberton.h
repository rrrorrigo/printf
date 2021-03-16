#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _char(va_list);
int _int(va_list);
int _sign(va_list);
int _string(va_list);

/**
 * struct formato - struct that check the format and call the functions
 *
 * @c: char to check
 * @f: function to call
 * Description: check the format and call the function
 */
typedef struct formato
{
	char *c;
	int (*f)(va_list);
} formato;

int _printf(const char *format, ...);
int _write(char c);
#endif
