#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, x, k;
	char *x, tmp;

	x = s;

	while (s[k] != '\0')
	{
		k++;
	}

	for (l = 1; l < k; l++)
	{
		x++;
	}

	for (i = 0; i < (k / 2); i++)
	{
		tmp = s[i];
		s[i] = *x;
		*x = tmp;
		x--;
	}
}
