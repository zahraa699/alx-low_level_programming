#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: value of function square
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @y: int to find square root
 * @result: square root
 * Return: value of square
 */


int square(int y, int result)
{
	if (result * result == n)
		return (result);
	else if (result * result < n)
		return (square(n, result + 1));
	else
		return (-1);
}
