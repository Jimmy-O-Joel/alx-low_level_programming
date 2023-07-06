#include "main.h"

/**
 *set_bit - set bit at a particular index
 *
 *@n: number
 *
 *@index: index of bit
 *
 *Return: 1 if worked and -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
