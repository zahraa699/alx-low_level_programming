#include "main.h"

/**
 * char *create_array - create an array
 * @size: size of array
 * @c: char to initialize
 *
 * Description: Longer description of the function)?
 *
 * Return: pointer to aary initialized or null
 */

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size--)
		i[size] = c;
	return (n);
}
