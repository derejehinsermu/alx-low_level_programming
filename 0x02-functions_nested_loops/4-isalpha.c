#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *            both lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/
int isalpha(int,c)
{
	if ((c > 'A' && c < 'z') || (c > 'a' && c < 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
