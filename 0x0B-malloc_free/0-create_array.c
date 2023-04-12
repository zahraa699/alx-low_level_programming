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
unsigned int i;
char *arr;

if (size == 0)
return (NULL);

/*Define values with malloc*/
arr = (char *)malloc(size * sizeof(char));

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
