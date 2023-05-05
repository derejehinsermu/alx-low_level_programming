#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/
void rev_string(char *s)
{
	char temp;
	int len = 0;
	int i;
	/* Find length of string */
	while (s[len] != '\0')
		len++;
	/* Swap characters from the two ends */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
