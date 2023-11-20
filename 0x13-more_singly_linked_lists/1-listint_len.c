#include "lists.h"


/**
 * listint_len - kaima mortabita
 * @h: node lawla
 * Return: hajam list
 */


size_t listint_len(const listint_t *h)
{

	size_t i = 0;

	while (h)
	{

		h = h->next;
		i++;

	}
	return (i);

}
