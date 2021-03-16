#include "holberton.h"
/**
 * _printf - print a string depending format received
 * @format: format to print
 *
 * Return: length of string to print
 */
int _printf(const char *format, ...)
{
	formato print[] = {
		{"c", _char},
		{"i", _int},
		{"d", _int},
		{"s", _string},
		{"%", _sign},
		{"ui", _unsignedInt},
		{NULL, NULL}
	};
	int stringLength = 0, i = 0, ii = 0;
	va_list up;

	if (!format)
		return (-1);
	va_start(up, format);
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
	va_end(up);
	return (stringLength);
}
