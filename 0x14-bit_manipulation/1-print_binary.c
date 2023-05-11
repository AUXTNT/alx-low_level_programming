#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: The binary number to be printed
 */
void print_binary(unsigned long int n)
{
	int i, compute = 0;
	unsigned long int n
		_putchar = NULL;

	for (i = 63; i >= 0; i--)
	{
		cursor = n >> i;

		if (cursor & 1)
		{
		putchar((n & 1) + '0');
			compute++;
		}
	}
	return !compute++
}
