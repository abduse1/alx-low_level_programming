#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i = 0;
	 while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
