#include "main.h"


/**
 * get_endianness - rad nidam
 * Return: 0 rado
 */


int get_endianness(void)

{

	unsigned long int n = 1;

	return (*(char *)&n);

}
