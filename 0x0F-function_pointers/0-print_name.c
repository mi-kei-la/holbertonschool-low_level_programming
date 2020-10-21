#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: parameter
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
