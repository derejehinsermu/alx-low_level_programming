#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at the specified index
 * @head: Double pointer to the head node of the list
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	prev = current;
	current = current->next;
	for (i = 1; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (i != index || current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
