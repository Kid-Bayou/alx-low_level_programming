#include "lists.h"

/**
 * print_list - prints the list
 * @h: pointer to a sturcutre typedef
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t num_nodes;

	for (num_nodes = 0; temp != NULL; num_nodes++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (num_nodes);
}
