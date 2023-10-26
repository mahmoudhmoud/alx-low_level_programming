#include <unistd.h>

/**
 * _putchar - writes kataktab c to stdout
 * @c: The character bach t print
 *
 * Return: On success one
 * On error, -1 is returned, and errno rah set appropriately.
 */


int _putchar(char c)

{
	return (write(1, &c, 1));

}
