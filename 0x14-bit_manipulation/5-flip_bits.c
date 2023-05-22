#include "main.h"

/**
 * flip_bits - counts the num of bits that need to be flipped
 * @n: the first num
 * @m: the second num
 *
 * Return: the num of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
		num++;

		diff >>= 1;
	}
	return (num);
}
