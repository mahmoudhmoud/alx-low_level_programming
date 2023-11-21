#include "lists.h"


/**
 * free_listint - khwi list
 * @head: node lawla
 * Return: khawi
 */


void free_listint(listint_t *head)

{

	listint_t *node;

	while (head)
	{

		node = head;
		head = head->next;
		free(node);

	}

}
