#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters passed
 * @n: argument counter
 *
 * Return: the sum of all passed parameters
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	unsigned int i;
	int res_sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	res_sum = 0;
	for (i = 0; i < n; i++)
	{
		res_sum += va_arg(args, int);
	}
	va_end(args);

	return (res_sum);
}

