#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a ponter to a newly allocated space wiht cop of arg
 * @str: string to copy
 * Return: pointer to array or null
 */
char *_strdup(char *str)
{
	char *strcopy;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		j++;
	strcopy = malloc(sizeof(char) * (j + 1));

	if (strcopy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		strcopy[i] = str[i];
	}

	strcopy = '\0';
	return (strcopy);
}

