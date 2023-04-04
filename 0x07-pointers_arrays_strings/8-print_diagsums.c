#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - this function print sum of diagsums
 * @a: apointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int j, k1 = 0, k2 = 0;

	for (j = 0; j < size; j++)
	{
		k1 += a[j];
		k2 += a[size - j - 1];
		a += size;
	}
	printf("%d, ", k1);
	printf("%d\n", k2);
}
