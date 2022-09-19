#include "main.h"

/**
* print_rev - prints reversed string
* @s: pointer
* Return: void
*/
void print_rev(char *s)
{
	i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
