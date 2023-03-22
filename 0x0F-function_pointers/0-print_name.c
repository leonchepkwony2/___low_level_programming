#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name- prints a name
 * @name : string to be displayed
 * @f : pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
