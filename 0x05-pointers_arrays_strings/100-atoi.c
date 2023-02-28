#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	 /* initialize sign and result to 0 */
	unsigned int sign = 0, result = 0;
	/* if character in string is a minus sign, increment sign */
	while (*s)
	{
		if (*s == '-')
			sign++;
		/* if character is between 0 and 9, multiply result by 10 */
		if (*s >= '0' && *s <= '9')
		{
			result *= 10;
			/* add character to result */
			result += *s - '0';
		}
		/* if result is not 0, break */
		else if (result)
			break;
		s++;
	}
	/* if sign is odd, multiply result by -1 */
	if (sign % 2)
		result *= -1;
	return (result);
}
