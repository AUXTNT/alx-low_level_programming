#include "main.h"

/**
 * clear_bit - the value of a given bit sets to 0
 * @n: pointer to the number to change
 * @index: clear the index of the bit
 *
 * Return: success at 1, failure at -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
