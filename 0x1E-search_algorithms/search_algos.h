#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


#include <math.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - wahda tam
 * @n: rakam
 * @index: dyal okada
 * @next: dyal lihdah
 * Description: martabta bdak
 */


typedef struct listint_s

{

		int n;
		size_t index;
		struct listint_s *next;

} listint_t;


/**
 * struct skiplist_s - kayma wahda
 * @n: rkam
 * @index: haja alfa tam
 * @next: lijat tam
 * @express: aa ha tam
 * Description: likaycara nab aacg
 */


typedef struct skiplist_s

{

	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;

} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
void print_array(int *array, int left, int right);


#endif
