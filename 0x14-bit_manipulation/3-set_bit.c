#include "main.h"

/**
 * set-bit - sets a bit at a given index to 1
 * @n: pointer to the num changed
 * index: set index of the bit to 1
 * Return: Success at 1, Failure at -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((index << 1UL) | *n);
	return (1);
}
