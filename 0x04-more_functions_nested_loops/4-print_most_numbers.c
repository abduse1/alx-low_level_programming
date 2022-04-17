#include "main.h"

/** print_most_numbers - Print the numbers since 0 up to 9
 *
 *
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
	if (((n >= 0) && (n < 2)) || ((n > 4) && (n <= 9)))
	{
	_putchar(n + '0');
	}

}
_putchar('\n');
}
