#include <main.h>

/**
 *_strlen - returns the length of a string
 *@s: the string passed
 *Return: returns the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
