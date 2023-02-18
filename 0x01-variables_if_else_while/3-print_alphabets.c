#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return:0 (Success)
 */
int main(void)
{
	int i;
	char up[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char low[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(low[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(up[i]);
	}
	putchar('\n');
	return (0);
}
