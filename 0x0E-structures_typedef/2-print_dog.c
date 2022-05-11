#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - Prints all the data of a dog
  * @d: A dog structure
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
			printf("Name: (nil)");
		if (d->age != NULL)
		{
			printf("Age: %f\n", d->age)
		}
		else
			printf("Age: (nil)");
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
			printf("Owner: (nil)");
	}

	return (0);
}
