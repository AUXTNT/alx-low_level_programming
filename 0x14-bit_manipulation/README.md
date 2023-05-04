PROJECT ON 0x14. C - Bit manipulation

This project consist of 5 main tasks and 2 advance tasks.

Task 0; Write a function that converts a binary number to an unsignded integer
To create a file that prints 0-binary_to_uint.c
Its prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL

Task 1; Write a function that prints the binary representation of a number
To create a file that prints 1-print_binary.c
Its prototype: void print_binary(unsigned long int n);

Task 2; Write a function that returns the value of a bit at a given index
To create a file that prints 2-get_bit.c
Its prototype: int get_bit(unsigned long int n, unsigned int index);
Indice start at 0. if an error occurs, return -1

Task 3; Write a function that sets the value of a bit to 1 at a given index.
To create a file that prints 3-set_bit.c
Its prototype: int set_bit(unsigned long int *n, unsigned int index);

Task 4; Write a function that sets the value of a bit to 0 at a given index.
To create a file that prints 4-clear_bit.c
Its prototype: int clear_bit(unsigned long int *n, unsigned int index);

Task 5; Write a function that returns the number of bits you would need to flip to get from one number to another.
To create a file that print 5-flip_bits.c
Its prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);

Task 6, Advance; Write a function that checks the endianness.
To create a file that prints 100-get_endianness.c
Its prototype: int get_endianness(void);
Return 0 if endian is big else 1 if its little

Task 7, Advance; Find the password for this program
To create a file that prints 101-password
