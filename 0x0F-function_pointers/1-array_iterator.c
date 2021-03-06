#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function executes elements of array
 * @array: array to be iterated
 *@size: the size of an array
 *@action: pointer to function array_iterator
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
