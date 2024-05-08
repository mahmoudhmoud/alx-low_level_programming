#include "search_algos.h"


/**
  * linear_search - kalab
  * @array: dyal awal onssor
  * @size: ajmo
  * @value: kima dyalo
  * Return: rado fin kan
  */


int linear_search(int *array, size_t size, int value)

{

	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);

}
