#include "holberton.h"
/**
 * _printf - call function that calls functions that print
 * @format: string to print
 * Return: string length
 */
int _printf(const char *format, ...)
{
	formato print[] = {
		{"c", _char},
		{"i", _int},
		{"d", _int},
		{"s", _string},
		{"%", _sign},
		{"u", _unsignedInt},
		{NULL, NULL}
	};
	va_list up;
	int stringLength = 0;

	if (!format)
		return (-1);
	va_start(up, format);
	stringLength = _function(format, print, up);
	va_end(up);
	return (stringLength);
}
/**
 * _function - call a functio that print
 * @format: format to print
 * @print: format to check
 * @up: variadic list
 *
 * Return: length of string to print
 */
int _function(const char *format, formato print[], va_list up)
{
	int i = 0, ii = 0, stringLength = 0;

	while (format && format[ii] != '\0')
	{
		if (format[ii] == '%')
		{
			while (print[i].c != NULL)
			{
				if (format[ii + 1] == *(print[i].c))
				{
					stringLength += print[i].f(up);
					i = 0;
					break;
				}
				i++;
			}
			if (print[i].c == NULL && format[ii + 1] != ' ')
			{
				if (format[ii + 1] != '\0')
				{
					_write(format[ii]);
					_write(format[ii + 1]);
					stringLength += 2;
				}
				else
					return (-1);
			}
			ii++;
		}
		else
		{
			_write(format[ii]);
			stringLength++;
		}
		ii++;
	}
	return (stringLength);
}
