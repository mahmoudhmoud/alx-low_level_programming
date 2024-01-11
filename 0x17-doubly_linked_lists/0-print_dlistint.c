#include "lists.h"


/**
 * print_dlistint - katbo
 * @h: onwan rasso
 * Return: hajam dyalo
 */


size_t print_dlistint(const dlistint_t *h)
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
