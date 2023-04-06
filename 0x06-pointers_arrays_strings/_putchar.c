#include <unistd.h>

/**
 * Description : _putchar -writes the character c to stdout
 * @c : the character to print
 *
 * Return : on sucess 1.
 *          on error, -1 is return, and errno is set appropriatey.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
