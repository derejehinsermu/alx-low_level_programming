#include <stdio.h>

/**
 * positive_or_negative - print value of i satus; zero, positive or negative
 *
 * @i: - i is an integr value
 *
*/
void positive_or_negative(int i) /* my positive_or_negative function */
{
	/* my if statement */
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
