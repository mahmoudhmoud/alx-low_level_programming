#include "main.h"


/**
 * *create_array - sawab array dyal chars,
 * and initializes maa char.
 * @size: size l array
 * @c: char l initialize
 * Return: pointer dyal array initialized or NULL
 */


char *create_array(unsigned int size, char c)

{

	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);

}
