#include "main.h"

/**
 * get_endianness - checks machine if little or big endian
 * Return: 0 at big, 1 at little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}

