#include "main.h"

/**
 * flip_bits - flips the bits of a given integer.
 * @n: first input
 * @m: second input
 *
 * Return: Always 0. (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
