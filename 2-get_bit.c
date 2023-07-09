#include <stdio.h>

/**
 * get_bit - an index in a decimal number returns the value of a bit
 * @n: search number
 * @index: the bit inex
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) 
	{
	// Invalid index 
		 return -1;
	}

	unsigned long int mask = 1UL << index;
	return (n & mask) ? 1 : 0;
}

int main()
{
	unsigned long int number = 137; // Example number
	unsigned int index = 4; // Example index

	int bitValue = get_bit(number, index);
	if (bitValue == -1) 
	{
		printf("Error: Invalid index\n");
	}
	else 
	{
		printf("Bit value at index %d: %d\n", index, bitValue);
	}

	return 0;
}
