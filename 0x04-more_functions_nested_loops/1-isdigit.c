#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: number to be checked
 *
 * Return: 1 if c is a digit or 0 if c anything else
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
