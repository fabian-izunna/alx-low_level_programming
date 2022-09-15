#include "main.h"

/**
* print_diagonal - prints diagonal
* Return: void
* @n: input
*/
void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
	if (i == 0)
		_putchar('\n');
}
