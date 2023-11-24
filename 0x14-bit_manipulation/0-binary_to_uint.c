#include "main.h"

/**
 * binary_to_uint - converts a binary number string to unsigned int
 * @b: the binary number as a string
 *
 * Description: converts a binary number string to unsigned int
 * Return: the unsigned int form of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int NUM = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		NUM = NUM * 2 + (*b++ - '0');
	}
	return (NUM);
}
