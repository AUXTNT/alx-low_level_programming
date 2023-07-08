#include "main.h"

/**
 * binary_to_uint - a binary number converts to unsigned int
 * @b: string containing the binary number
 *
 * Return: the number to convert
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int cursor = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		cursor = 2 * cursor + (b[i] - '0');
	}

	return (cursor);
}
