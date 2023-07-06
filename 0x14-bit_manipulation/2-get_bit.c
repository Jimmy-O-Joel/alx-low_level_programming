#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *
 *@n: number
 *
 *@index: index of bit
 *
 *Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index;


	if (mask & n)
		return (1);
	else
		return (0);

	return (-1);
}
