#include <unistd.h>

/**
 * _putchar - used to writes the character c to stdout
 * @c: is The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}