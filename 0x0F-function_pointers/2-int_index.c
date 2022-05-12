#include "function_pointers.h"

/**
 * int_index - searches an index for integers
 * @array: array of integers
 * @size: size of an integer
 * @cmp: pointer to function to compare array of integers
 *
 * Return: index of first element for cmp not 0 and -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		if (size > 0)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
		return (-1);
	}
	return (-1);
}
