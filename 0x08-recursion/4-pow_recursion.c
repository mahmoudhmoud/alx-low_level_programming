#include "main.h"


/**
 * _pow_recursion - katkalab aaela string dyal ay set dyal bytes.
 * @x: base
 * @y: exposant
 * Return: Pointer l byte f `s` katlakka maa chiwahhad fal bytes f `accept`
 * ola NULL hata byte matalkat
 */


int _pow_recursion(int x, int y)
{


if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));


}
