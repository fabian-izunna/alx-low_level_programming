#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: input of name
 * @f: function pointer
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
