#include "main.h"

/**
 * git_bit - returns the value of an index of a bit in a decimal num
 * @n: num to search
 * @index: index of a bit
 *
 * Return: The value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
