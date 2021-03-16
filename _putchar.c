#include "holberton.h"

/**
 * _putchar - prints char
 * @c: char
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
