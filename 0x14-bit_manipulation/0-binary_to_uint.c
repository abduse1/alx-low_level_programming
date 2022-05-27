#include "main.h"
#include <string.h>

/**
 *binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a str of 0 and 1 chars
 *
 *Return: converted number,
 * 0 if b NULL or, b contains char other than 0 or 1.
*/

unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int total = 0;
	int dec = 1;

	if (!b)
		return (0);

	for (int i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += dec;
		dec *= 2;
	}
	return (total);
}
