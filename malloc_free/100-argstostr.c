#include "main.h"
#include <stdlib.h>
int len_of_args(char **args, int arg_c);

/**
 * argstostr - Concatinates all args of a prog
 * @ac: Number of arguments to concatinate
 * @av: Arguments
 * Return: Ptr to concatinated args, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len, k;
	char *concat;

	if (ac == 0 || av == NULL)
		return (0);

	total_len = len_of_args(av, ac);

	concat = malloc((total_len + 1) * sizeof(char));
	if (concat == NULL)
		return (0);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			concat[k] = av[i][j];
		concat[k++] = '\n';
	}
	concat[total_len] = '\0';

	return (concat);
}


/**
 * len_of_args - finds the total length of all the args
 * @args: An array of strs
 * @arg_c: number of arguments to scan
 * Return: Length of the combination of args
 */
int len_of_args(char **args, int arg_c)
{
	int i, j, total = 0;

	if (args == NULL)
		return (0);

	for (i = 0; i < arg_c; i++)
	{
		for (j = 0; args[i][j] != '\0'; j++)
			total++;
		total++;
	}

	return (total);
}
