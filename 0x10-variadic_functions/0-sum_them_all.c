#include "variadic_functions.h"

/**
 * sum_them_all - sums the arguments passed into it
 * @n: number of arguments
 * Return: The sum, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (; i < n; i++)
		sum += va_arg(arglist, int);
	va_end(arglist);

	return (sum);
}
