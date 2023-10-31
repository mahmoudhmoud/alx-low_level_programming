#include "main.h"


/**
 * *_strdup - return a pointer l newly allocated space f dakira
 * which contains a copy dyal string given as a iaaedad.
 * @str: string
 * +1 f size dir lhhad string character
 * Return: zero
 */


char *_strdup(char *str)
{

	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{

		return (NULL);

	}
	else
	{

		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);

}
