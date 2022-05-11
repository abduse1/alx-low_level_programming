#include "function_pointers.h"

/**
 * print_name - to print name
 * @name: name to be printed
 * @f: pointer to function print_name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULLL)
	{
		f(name);
	}
}
