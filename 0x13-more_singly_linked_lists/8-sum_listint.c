#include "lists.h"


/**
 * sum_listint - rajaae gaae lmaaelomat
 * @head: node lawla
 * Return: majmoaae
 */


int sum_listint(listint_t *head)

{

	int sum = 0;

	while (head)
	{

		sum += head->n;
		head = head->next;

	}
	return (sum);

}
