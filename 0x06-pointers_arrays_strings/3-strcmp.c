#include "main.h"

/**
<<<<<<< HEAD
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
=======
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
>>>>>>> 086e9c873b85e69b8f85b4d13ab234d21af5491b
		{
			c++;
			continue;
		}
		else
		{
<<<<<<< HEAD
			r = s1[c] - s2[c];
=======
			n = s1[i] - s2[j];
>>>>>>> 086e9c873b85e69b8f85b4d13ab234d21af5491b
			break;
		}

		c++;
	}

	return (r);
}
