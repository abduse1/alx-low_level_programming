#include "main.h"

#include <stdio.h>

/**
 * _strncat - to concatenates limited number of strings 
 * @dest: destination string 
 * @src: source string  
 * @n: limit tha length of source string
 *
 * Return : pointer  to destination string after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;
	while(dest[dest_len])
	{
		dest_len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len] = src[i];
	}

	dest[dest_len + n +1] = '\0';
	return (dest);
}
