#include "lists.h"


/**
 * print_listint - ktab kaima
 * @h: node lawla
 * Return: kaima hajamha
 */


size_t print_listint(const listint_t *h)
{

	size_t i = 0;

	while (h)
	{

		printf("%d\n", h->n);
		h = h->next;
		i++;

	}
	return (i);

}
