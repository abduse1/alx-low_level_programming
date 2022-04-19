#include "main.h"
 
/**
 * _strlen - returns the length of a string
 *
 * @c to count a string
 * reurns a string length 
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

