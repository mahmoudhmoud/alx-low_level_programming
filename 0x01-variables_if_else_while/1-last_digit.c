#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the value of n status:
 *		greater than, is zero and is not less tthan 6.
 *
 * Return: 0 (success)
 */

int main(void)
{

int n, last_ligit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_ligit = n % 10;

if (last_ligit > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, last_ligit);

else if (last_ligit == 0)
printf("Last digit of %i is %i and is 0\n", n, last_ligit);

else if (last_ligit < 6 && last_ligit !=  0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_ligit);

return (0);
}
