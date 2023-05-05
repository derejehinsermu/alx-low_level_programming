#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int num_bits = 0;

	while (diff != 0)
	{
		num_bits += diff & 1;
		diff >>= 1;
	}
	return (num_bits);
}
