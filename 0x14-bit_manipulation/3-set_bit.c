#include "main.h"

/**
 * set_bit- function that sets the value of a bit
 * to 1 at a given index.
 * @n: pointer to an unsigned long int
 * @index: index to set bit to 1
 * Return: 1(Success) or -1 (Failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	unsigned long int mask = 1UL << index;

	*n |= mask;

	return (1);
}
