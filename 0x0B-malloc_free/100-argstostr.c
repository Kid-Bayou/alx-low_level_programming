#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguements to the program
 * @ac: arguement count
 * @av: pointer to arguements
 * Return: pointer to new space in memory or null
 */
char *argstostr(int ac, char **av)
{
	char *strcopy;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	strcopy = malloc(sizeof(char) * size);
	if (strcopy == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strcopy[k++] = av[i][j];
		}
		strcopy[k++] = '\n';
	}
	strcopy[k] = '\0';
	return (strcopy);
}
