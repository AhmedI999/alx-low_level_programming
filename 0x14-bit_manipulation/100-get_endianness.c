#include "main.h"
/**
 * get_endianness - advanced and it is used to check the endianness
 * Return: 0 if the result is big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
