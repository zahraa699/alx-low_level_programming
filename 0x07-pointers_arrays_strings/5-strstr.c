#include "main.h"

/**
 * _strstr - this function find location
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: the returned value 0 success
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
			return (result);
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
