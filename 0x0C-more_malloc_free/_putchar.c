#include <unistd.h>

/**
 * _putchar - ktab mokawin
 *@c: mokawin bach taktab
 * Return: rad wahhad
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}
