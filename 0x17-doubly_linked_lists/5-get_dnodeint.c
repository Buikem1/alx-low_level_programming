
ceasar28
/
alx-low_level_programming-1
Public
forked from ermiast/alx-low_level_programming-1
Code
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming-1/0x17-doubly_linked_lists/5-get_dnodeint.c
@Emmastro
Emmastro Submit
 1 contributor
28 lines (22 sloc)  473 Bytes
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of linked list
 * @index: node index to return
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Out of range*/
	}

	return (current);
}
