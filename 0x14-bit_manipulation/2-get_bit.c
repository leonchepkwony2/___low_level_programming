#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Number to check
 * @index : index, starting from 0 of the bit you want to get
 * Return: value of the bit at index(Success) or -1(Failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	unsigned long int bit_value = n >> index;

	return (bit_value & 1);
}
