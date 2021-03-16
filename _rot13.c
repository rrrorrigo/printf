#include "holberton.h"
/**
 * _rot13 - prints the rot13'ed string
 * @rot: list
 * Return: int
 */

int _rot13(va_list rot)
{
	int i, j;
	int counter = 0;
	char *s = va_arg(rot, char *);
	char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
			if (s[i] == letters[j])
			{
				_putchar(rot13[j]);
				counter++;
				break;
			}
		if (s[i] == '\0')
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
