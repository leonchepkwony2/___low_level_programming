#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Number to check
 * @index : index, starting from 0 of the bit you want to get
 * Return: value of the bit at index(Success) or -1(Failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	unsigned long int mask = 1UL << index;

	if ((n & mask) != 0)
		return (1);
	else
		return (0);
}
