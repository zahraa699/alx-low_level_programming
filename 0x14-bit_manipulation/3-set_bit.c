#include "main.h"

/**
 * set_bit - this function set the bit at index
 * @n: the number to index
 * @index: the bit to get
 *
 * Description: this function set the bit at index
 *
 * Return: Description of the returned value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
