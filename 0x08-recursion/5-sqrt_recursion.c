#include "main.h"

/**
 * _sqrt_recursion - katalkka wahhad natural square root
 * @n: int
 * @val: square root
 * Return: int
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{

return (square(n, 1));

}


/**
 * square - talka square root
 * @n: int bach lkaw square root
 * @val: square root
 * Return: int
 */


int square(int n, int val)
{


if (val * val == n)
	return (val);
else if (val * val < n)
	return  (square(n, val + 1));
else
	return (-1);


}
