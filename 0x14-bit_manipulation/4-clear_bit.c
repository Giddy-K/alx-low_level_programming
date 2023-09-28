#include "main.h"

/**
 * clear_bit - sets to 0
 * @n: pointer to change
 * @index: index of the bit to clear
 *
 * Return: 1, -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
