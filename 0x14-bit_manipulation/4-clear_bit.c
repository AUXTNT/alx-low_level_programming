#include "main.h"
/**
 * clear_bit - val of a given bit set to 0
 * @n: pointer to the num to change
 *
 * Return: success at 1, failure at -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) ? 1 : -1);
	return (1);
}
