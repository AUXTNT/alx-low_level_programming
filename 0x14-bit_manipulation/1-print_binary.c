#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: The binary number to be printed
 */
void print_binary(unsigned long int n)
{
	int i, compute = 0;
	unsigned long int cursor;


	for (i = 63; i >= 0; i--)
	{
		cursor = n >> i;

		if (cursor & 1)
		{
			_putchar ('1');
			compute++;
		}
		else if (cursor)
			_putchar('0');
	}
	if (!cursor)
		_putchar('0');
}
