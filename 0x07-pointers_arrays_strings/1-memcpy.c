#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes from source to be copied
 *
 * Return: dest memory area after replacement
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
