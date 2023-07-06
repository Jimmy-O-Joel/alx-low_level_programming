#include "main.h"

/**
 *clear_bit - sets bit to 0 at a given index
 *
 *@n: number
 *
 *@index: index of bit
 *
 *Return: 1 if success -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
