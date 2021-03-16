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
	char *s = va_arg(rot, char *)
	char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (counter = 0; counter < 52; counter++)
			if (s[counter] == letters[i])
			{
				_putchar(rot13[j]);
				counter++;
			}
			else
			{
				_putchar(s[i]);
				counter++;
			}
		return(counter);
}
