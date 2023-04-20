#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all paramters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;


	for (i = 0; < n; i++)
		sum += va - arg(ap, int);

	va_end(ap);

	return (sum);
}
