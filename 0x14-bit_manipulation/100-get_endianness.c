#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 *
 * Description: this function returns the endianness of the system
 *
 * Return: Description of the returned value void
 */

int get_endianness(void)
{
	unsigned long int m = 1;

	return (*(char *)&m);
}
