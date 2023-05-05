#include "main.h"

/**
 * clear_bit - this function clear the bit at index
 * @n: the number to index
 * @index: the bit to get
 *
 * Description: this function clear the bit at index
 *
 * Return: Description of the returned value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
