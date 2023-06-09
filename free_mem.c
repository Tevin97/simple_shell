#include "shell.h"

/**
 * free_mem - Frees malloc'ed memory of string array
 * @av: The string array to be freed
 *
 * Return: Nothing.
 */
void free_mem(char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		free(av[i]);
		i++;
	}
	free(av);
}
