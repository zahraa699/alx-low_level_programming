#include <unistd.h>
#include "main.h"
/**
 * Description : _putchar -writes the character c to stdout
 * @c: the character to print
 *
 * Description : _putchar -writes the character c to stdout
 *
 * Return: on sucess 1 , on error -1 is returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
