#include "function_pointers.h"

/**
 * array_iterator - this function about maps an array through fun pointer
 * @array: the int array
 * @size: this is size of array
 * @action: function pointer
 *
 * Description: Longer description of the function)?
 *
 * Return: the returned value void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
