#include <stdio.h>

/**
 * main - Entry point
 *
 * Program print numbers from 0 to 9
 *
 * Return: 0 if successful
*/

int main(void)
{
int i = 0;
while (i < 10)
{
printf("%i", i);
i++;
}
putchar('\n');
return (0);
}
