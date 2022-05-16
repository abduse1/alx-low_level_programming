#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters passed
 * @n: argument counter
 *
 * Return: sum of all passed parammeters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
