#include "main.h"

/**
 * _strcat - Short description, single line
 * @dest: Description of parameter x
 * @src : description
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

char *_strcat(char *dest, char *src)
{
int c1, c2;

c1 = 0;
while (dest[c1])
c1++;
for (c2 = 0; src[c2] ; c2++)
dest[c1++] = src[c2];
return (dest);
}
