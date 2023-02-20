#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * using putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
