#include "main.h"

/**
 *flip_bits - flips the bits
 *
 *@n: number
 *
 *@m: number
 *
 *Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}
	return (count);
}
