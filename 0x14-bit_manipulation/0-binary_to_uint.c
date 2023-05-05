#include "main.h"

/**
 * binary_to_uint - this function convert binary to number
 * @b: the binary number as string
 *
 * Description: this function convert binary to number
 *
 * Return: Description of the returned value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
