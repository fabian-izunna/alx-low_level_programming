#include "main.h"

/**
* print_square - prinys square
* @size: no of sqs
* Return: void
*/
void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
