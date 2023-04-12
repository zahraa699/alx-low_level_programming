#include "main.h"

/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer..
 */

int **alloc_grid(int width, int height)
{
int **z, i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

z = malloc(sizeof(int *) * height);
if (z == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
z[i] = malloc(sizeof(int) * width);

if (z[i] == NULL)
{
for (; i >= 0; i--)
{
free(z[i]);
}
free(z);
return (NULL);
}

for (j = 0; j <= width; j++)
{
z[i][j] = 0;
}
}
return (z);
}
