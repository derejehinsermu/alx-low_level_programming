
#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	int i;
	int count = 0;
	int first_digit;
	int number = n;

	if (n < 0)
	{
		_putchar('-');
	}
	do {
		number /= 10;
		count++;
	} while (number != 0);
	first_digit = n;
	for (i = 0; i < count - 1; i++)
	{
		first_digit /= 10;
	}
	for (i = 0; i < count; i++)
	{
		_putchar(first_digit + '0');
		n %= 10;
		first_digit = n;
	}
}
