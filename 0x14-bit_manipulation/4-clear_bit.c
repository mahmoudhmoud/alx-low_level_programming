#include "main.h"


/**
 * clear_bit - nakki
 * @n: index addad
 * @index: ad bach tnakki
 * Return: rad
 */


int clear_bit(unsigned long int *n, unsigned int index)

{

	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);

}
