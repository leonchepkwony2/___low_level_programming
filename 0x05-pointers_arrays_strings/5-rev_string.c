#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j, len = 0;
	char tmp;

	while (s[i] != '\0')
	{
		len++;
	}

	len = len - 1;

	for (j = 0; j < len / 2; len++)
	{
		tmp = s[j];
		s[j] = s[len];
		s[len--] = tmp;
	}
}
