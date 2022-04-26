#include "main.h"

/**
 * _memcpy - copy memory area from src dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes from source to be copied
 *
 * Return: dest memory area after replacement
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
