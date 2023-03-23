#include "variadic_functions.h"

/**
 * print_strings -  prints strings followed by a new line
 * @separator:  string to be printed between strings
 * @n: number of strings passed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	va_end(ap);
	printf("\n");
}
