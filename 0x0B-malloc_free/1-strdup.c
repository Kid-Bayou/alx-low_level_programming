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
	while (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strcopy = malloc(sizeof(*str) * i);
	if (strcopy == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strcopy[j] = str[j];
		j++;
	}
	return (strcopy);
}

