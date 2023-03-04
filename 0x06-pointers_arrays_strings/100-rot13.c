#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] > 'm')
				str[i] -= 13;
			else
			{
				str[i] += 13;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] > 'M')
				str[i] -= 13;
			else
				str[i] += 13;
		}
		i++;
	}
	return (str);
}
