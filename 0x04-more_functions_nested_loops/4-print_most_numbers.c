#include "main.h"

<<<<<<< HEAD
/** print_most_numbers - Print the numbers since 0 up to 9
 *
 *
 * Return: The numbers since 0 up to 9
 */

=======
/**
 * main - check the code
 *
 * Return: Always 0.
 */
>>>>>>> 9100a274672aa4a610bbed60a9465c8dbcc768ef
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
<<<<<<< HEAD
	if (((n >= 0) && (n < 2)) || ((n > 4) && (n <= 9)))
	{
	_putchar(n + '0');
	}

=======
if (((n >= 0) && (n < 2)) || ((n > 4) && (n <= 9)))
{
_putchar(n + '0');
>>>>>>> 9100a274672aa4a610bbed60a9465c8dbcc768ef
}
_putchar('\n');
}
