#include "main.h"

/**
 * get_endianness: function that checks the endianness
 * Return: 0 (Big Endian) 1 (little endian)
 */
int get_endianness(void)
{
	uint32_t num = 1;

	if (*(char *)&num == 1)
		return (1);


	return (0);
}
