#include "main.h"

/**
 * get_bit - it is used to return the value of a bit at a given index.
 * @n: used to check bits
 * @index: which index to check bit
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
