#include "function_pointers.h"

/**
* print_name - imprime un nom
* @name: nom à imprimer
* @f: pointeur de fonction pour spécifier comment imprimer le nom
*/
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
