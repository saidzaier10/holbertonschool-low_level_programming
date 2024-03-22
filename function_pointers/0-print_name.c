#include "function_pointers.h"

/**
* print_name - function that print a name
* @name: name to print
* @f: function to use
* return : nothing
*/
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
