#include "main.h"

/**
 * get_bit - an index in a decimal number returns the value of a bit
 * @n: search number
 * @index: the bit inex
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
