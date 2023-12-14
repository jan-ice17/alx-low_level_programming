#include "main.h"

/**
 * flip_bits - returns the no
 * of bits to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the no of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count;

	x = n ^ m;
	count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}
