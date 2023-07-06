#include "main.h"
#include <stdio.h>

/**
 *print_binary - prints out the binary representation of a number
 *@n: binary number
 *
 *Return: Always 0
 */

void print_binary(unsigned long int n)
{
	/*check if n is non-zero */
	if (n >> 0)
	{
		/*recursive function with n right shifted */
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

