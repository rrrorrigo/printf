#include "holberton.h"
/**
 * _char - print a character
 * @up: variadic list
 *
 * Return: length to print
 */
int _char(va_list up)
{
	_write(va_arg(up, int));
	return (1);
}
/**
 * _string - print a string
 * @up: variadic list
 *
 * Return: length of string
 */
int _string(va_list up)
{
	char *string;
	int i = 0;

	string = va_arg(up, char*);
	if (!string)
		return (-1);
	for (; string[i] != '\0'; i++)
		_write(string[i]);
	return (i);
}

/**
 * _sign - print a porcentage
 * @up: variadic list
 *
 * Return: length of string
 */
int _sign(__attribute__((unused)) va_list up)
{
	_write('%');
	return (1);
}
