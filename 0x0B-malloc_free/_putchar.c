#include "main.h"
#include <uinstd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always on Success 1.
 * On error, -1 is returned, and errno is set accurately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
