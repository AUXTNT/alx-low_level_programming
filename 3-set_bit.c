#include "main.h"

/**
 * set_bit - sets index to 1 in a given bit
 * @n: pointer to the number to change
 * @index: set index of the bit to 1
 *
 * Return: success at 1, -1 at failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
