#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
	int a, b, prod;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			prod = a * b;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0'); /*get the first digit*/

			_putchar((prod % 10) + '0'); /*get the second digit*/
		}
		_putchar('\n');
	}
}
