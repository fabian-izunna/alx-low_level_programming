#include "main.h"

/**
* print_line - prints line
* @n: input
* Return: void
*/
void print_line(int n)
{
	int line = 0;

	while (line < n && n > 0)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
