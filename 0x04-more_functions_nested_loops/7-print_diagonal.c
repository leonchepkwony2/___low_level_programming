#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 1;
		while (i <= n)
		{
			if (i == n)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
			i++;
			_putchar('\n');
		}
	}
}
