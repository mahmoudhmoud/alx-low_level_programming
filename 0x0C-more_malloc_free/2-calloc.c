#include "main.h"


/**
 * _calloc - rajaao lwalo
 * @nmemb: adad mokawinat
 * @size: hajam mokawin
 *
 * Return: blasa kkawya
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return (p);

}
