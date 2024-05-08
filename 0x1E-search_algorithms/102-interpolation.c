#include "search_algos.h"


/**
 * interpolation_search - kalb tamnk
 * @array: kaydi latm
 * @size: adadom
 * @value: kima taklab
 * Return: rado lawala fihmo
 */


int interpolation_search(int *array, size_t size, int value)

{

	size_t l, m, r;

	if (array != NULL && size > 0)
	{

		l = 0;
		r = size - 1;
		while (array[l] != array[r])
		{
			m = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
			if (m < l || m > r)
			{
				printf("Value checked array[%lu] is out of range\n", m);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", m, array[m]);
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m - 1;
			else
				return (m);
		}

	}
	return (-1);

}
