#include "function_pointers.h"


/**
 * print_name - kayktab smya
 * @name: string smyto
 * @f: pointer kaykatbo
 * Return: walo
 */


void print_name(char *name, void (*f)(char *))
{

	if (name && f)
		f(name);

}
