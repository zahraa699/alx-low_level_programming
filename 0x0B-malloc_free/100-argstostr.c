#include "main.h"

/**
 * *argstostr - print args
 * @ac: takes in width of grid
 * @av: height of grid
 *
 * Description: Longer description of the function)?
 *
 * Return: the args one line at time
 */

char *argstostr(int ac, char **av)
{
	int j = 0, nc = 0, z = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, nc++)
		nc += _strlen(av[j]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (z = 0; av[j][z] != '\0'; z++, cmpt++)
			s[cmpt] = av[j][z];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
