#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	for(x = 0; x <= 98; x++)
	{
		for(y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(',');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			if(x == 98 && y == 99)
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
