#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 *
 * Description: this program return endianness of sy
 * Return: 0 if big endian, 1 if small
*/

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
