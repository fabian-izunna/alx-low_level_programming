#include "main.h"

/**
* print_alphabet_x10 - Prints alpha
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar(10);
		i++;
	}
}
