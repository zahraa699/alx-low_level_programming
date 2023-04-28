#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - this function executes before main()
 *
 * Description: this function executes before main()
 *
 * Return: Description of the returned value is void
 */

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
