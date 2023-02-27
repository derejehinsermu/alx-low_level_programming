#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	/* Find length of string */
	while (str[len] != '\0')
		len++;
	/* Print the second half of the string */
	for (i = (len - 1) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
