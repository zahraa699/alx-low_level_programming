#include "function_pointers.h"

/**
 * int_index - this function search for integer
 * @array: the int array
 * @size: the array size
 * @cmp: the compare function
 *
 * Description: Longer description of the function)?
 *
 * Return: the returned value integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (array && size && cmp)
		while (j < size)
		{
			if (cmp(array[j]))
				return (j);
			j++;
		}
	return (-1);
}
