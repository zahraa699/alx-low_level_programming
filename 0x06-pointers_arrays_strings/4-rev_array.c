#include "main.h"

/**
 * reverse_array - Short description, single line
 * @a: pointer input
 * @n : input
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
