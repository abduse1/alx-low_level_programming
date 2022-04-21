#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1:The first string 1
 * @s2: The second string 2
 *
 * Returns : integer
 */
int _strcmp(char *s1, char *s2);
{
	int i = 0, j = 0, k = 0, n = 0, tmp;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
        {
                j++;
        }

	if (i <= j)
	{
		tmp = i;
	}
	else
	{
		tmp = j;
	}

	while (c <= tmp)
	{
		if (s1[i] == s2[j])
		{
			c++;
			continue;
		}
		else
		{
			n = s1[i] - s2[j];
			break;
		}

		c++;
	}

	return (r);
}
