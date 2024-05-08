#include <math.h>
#include "search_algos.h"


/**
 * move_forward - harko ldakam
 * @list: kaiyma dalo
 * @index: ldrakam
 * Return: rado likmto
 */


listint_t *move_forward(listint_t *list, size_t index)

{

	while (list->next != NULL && list->index < index)
		list = list->next;
	return (list);

}


/**
 * jump_list - kalba ala lkima laman tam
 * @list: jauna dtak
 * @size: adad anssir
 * @value: kima talklab
 * Return: rado lkimto
 */


listint_t *jump_list(listint_t *list, size_t size, int value)

{

	size_t jump;
	listint_t *left, *right;

	if (list != NULL && size > 0)
	{

		jump = sqrt(size);
		left = list;
		right = move_forward(left, jump);
		printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		while (right->index < (size - 1) && right->n < value)
		{
			left = right;
			right = move_forward(left, right->index + jump);
			printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       left->index, right->index);
		printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		while (left->index < size - 1 && left->n < value)
		{
			left = left->next;
			if (left == NULL)
				return (NULL);
			printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		}
		if (left->n == value)
			return (left);

	}
	return (NULL);

}
