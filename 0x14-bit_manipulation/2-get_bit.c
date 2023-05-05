#include "main.h"

/**
 * get_bit - this function get the bit at index
 * @n: the number to index
 * @index: the bit to get
 *
 * Description: this function get the bit at index
 *
 * Return: Description of the returned value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
