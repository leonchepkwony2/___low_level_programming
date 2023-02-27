#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len)
}
