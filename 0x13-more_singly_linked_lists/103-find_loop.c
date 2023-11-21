#include "lists.h"
#include <stdlib.h>


/**
 * find_listint_loop - lka lkaima
 * @head: maa kaimat lbaht
 * Return: node onwanha
 */


listint_t *find_listint_loop(listint_t *head)

{

	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{

		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);

	}

	return (NULL);

}
