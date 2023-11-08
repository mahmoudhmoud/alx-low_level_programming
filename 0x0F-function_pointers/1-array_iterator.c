#include "function_pointers.h"


/**
 * array_iterator - lkka pointer dala
 * @array: int
 * @size: hhajam
 * @action: dala
 * Return: walo
 */


void array_iterator(int *array, size_t size, void (*action)(int))

{

	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);

}
