#include "main.h"
/**
 * flip_bits - flips the bits of a given integer.
 * @n: first input
 * @m: second input
 *
 * Return: Always (0) success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1)
			count++;
	}

	return (count);
}
