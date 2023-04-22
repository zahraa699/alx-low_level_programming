#include "function_pointers.h"

/**
 * print_name - this function prints names
 * @name: the string name
 * @f: the printing function of pointer
 *
 * Description: Longer description of the function)?
 *
 * Return: the returned value is void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
