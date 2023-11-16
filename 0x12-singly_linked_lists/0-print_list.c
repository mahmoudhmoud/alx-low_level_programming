#include "lists.h"


/**
 * _strlen - rado
 * @s: kaykkalab
 * Return: damjo
 */


int _strlen(char *s)

{

	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);

}


/**
 * print_list - kayaktab rabit kkaima
 * @h: node lawal
 * Return: hajam lkkaima
 */


size_t print_list(const list_t *h)
{

	size_t i = 0;

	while (h)
	{

		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;

	}
	return (i);

}
