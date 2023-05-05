#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the unsigned long int to modify
 * @index: index of the bit to set to 1
 *
 * Return: Return 1 if success or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}

