#include "main.h"

/**
 *binary_to_uint - converts binary to unsigned integer
 *
 *@b: the binary string
 *
 *Return: the converted binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = 0;
	int power = 1;
	int i;

	if (!b)
		return (0);

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += power;

		power *= 2;
	}
	return (result);
}
