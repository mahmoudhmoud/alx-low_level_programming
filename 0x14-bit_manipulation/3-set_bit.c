#include "main.h"


/**
 * set_bit - 5alih f ada
 * @n: adad
 * @index: ada taglas
 * Return: rado
 */


int set_bit(unsigned long int *n, unsigned int index)

{

	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));

}
