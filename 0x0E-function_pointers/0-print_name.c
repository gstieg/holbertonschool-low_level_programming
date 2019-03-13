#include <stdlib.h>
#include <stdio.h>

/**
 * print_name -  prints a name
 *
 * @name: name input
 *
 * @f: function to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		if (f != NULL)
			f(name);
}
