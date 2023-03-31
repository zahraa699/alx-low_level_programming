#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: int type array pointer
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

char *rot13(char *s)
{
	int i;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == input[i])
			{
				*s = output[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
