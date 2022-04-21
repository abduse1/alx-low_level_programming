#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: destination string 
 * @src: source string
 * @n: limit of copy
 *
 * Return: pointer of the destinationa after copy
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
