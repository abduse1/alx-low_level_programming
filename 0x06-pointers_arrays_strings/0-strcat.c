#include "main.h"
#include "stdio.h"

/**
 * _strcat - concenates two string variables
 * @dest : the destination string
 * @src : the source string
 *
 * Return : the pointer to dest after concatenation
 */
char *_strcat(char *dest, char *src)
{
	int dstlen = 0, i;

	while(dest[dstlen])
	{
		dstlen++;
	}

	for(i = 0; src[i] != '\0'; i++)
	{
		dest[dstlen] = src[i];
		dstlen++;
	}

	dest[dstlen] = '\0';
	return (dest);
}
