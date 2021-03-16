#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	unsigned int ui;
	void *addr;

	len = _printf("hello\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("AA % \n", NULL);
	_printf("\0");
	_printf("\n");
	_printf("\\");
	_printf("Negative:[%d]\n", -762534);

	_printf("Length:[%d, %i]\n", len, len);
	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");

	_printf("Address:[%p]\n", addr);

	_printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);

	return (0);
}
