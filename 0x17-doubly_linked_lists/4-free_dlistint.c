#include "lists.h"

/**
 * free_dlistint - khwihlih
 * @head: dayo lih
 * Return: kwi
 */


void free_dlistint(dlistint_t *head)

{

	dlistint_t *node;

	while (head)
	{

		node = head;
		head = head->next;
		free(node);

	}

}
