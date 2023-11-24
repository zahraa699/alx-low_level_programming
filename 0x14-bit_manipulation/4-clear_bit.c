#include "main.h"

/**
 * clear_bit - this function clear bit at index
 * @n: the number of index
 * @index: the bit to clear index
 *
 * Description: this program clear bit from index
 *
 * Return: 1 if successful or -1 if unsucessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (-1);
}
