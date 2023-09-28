#include "main.h"

/**
 * get_endianness - checks if a machine is little or big
 * Return: 0, 1
 */
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
