#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: Print the character
 *
 * Return: 1 On success.
 * On error, returned -1 if errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
