#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
	int j = 0;

	for  (;str[j] != '\0'; j++)
	{
		if (j / 2 == 0)		
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

