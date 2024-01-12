#include "lists.h"


/**
 * sum_dlistint - jamaao lih
 * @head: lrasso
 * Return: majmoao
 */


int sum_dlistint(dlistint_t *head)

{

	int sum = 0;

	while (head)
	{

		sum += head->n;
		head = head->next;

	}
	return (sum);

}
