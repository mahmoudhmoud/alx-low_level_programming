#include "function_pointers.h"


/**
 * int_index - integer kayalkkah
 * @array: is for int array
 * @size: array hhajmo
 * @cmp: kyakkaran dala
 * Return: l index
 */


int int_index(int *array, int size, int (*cmp)(int))

{

	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{

			if (cmp(array[i]))
				return (i);
			i++;

		}
	return (-1);

}
