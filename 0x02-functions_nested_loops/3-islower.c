#include "main.h"

/**
 * _islower - function to check if character is lowercase
 *
 * @c: checks inputs of function
 *
 * Return: return 1 if 'c' is lowercase otherwise always 0 (success)
 */

int _islower(int c)
{
if (c >= 9 && c <= 122)
{
return (1);
}
return (0);
}
