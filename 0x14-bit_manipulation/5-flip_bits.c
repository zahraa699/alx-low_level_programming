#include "main.h"

/**
 * flip_bits - this function flip to transform one num to another
 * @n: first number
 * @m: second number
 *
 * Description: this function flip to transform one num to another
 *
 * Return: Description of the returned value number to flip to converted
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int X = n ^ m;
	unsigned int C = 0;

	while (X)
	{
		if (X & 1ul)
			C++;
		X = X >> 1;
	}
	return (C);
}
