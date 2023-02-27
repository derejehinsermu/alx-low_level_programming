#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
int print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	for (length--; length >= 0; length--)
	{
		_putchar(s[count]);
	_putchar('\n');
}
