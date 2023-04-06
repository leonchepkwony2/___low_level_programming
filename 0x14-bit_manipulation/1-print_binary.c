#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n : decimal number to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if ((n & mask) != 0 || flag != 0)
		{
			flag = 1;
			if ((n & mask) != 0)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
		mask >>= 1;
	}
	if (flag == 0)
	{
		_putchar('0');
	}
}
