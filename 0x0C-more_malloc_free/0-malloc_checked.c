#include "main.h"


/**
 * *malloc_checked - kaychof blast dakira
 * @b: int
 * Return: yal pointer ya null
 */


void *malloc_checked(unsigned int b)
{

	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);

}
