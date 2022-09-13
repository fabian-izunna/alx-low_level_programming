#include "main.h"

/**
* times_table - 9 table
* Return: table
*/
void times_table(void)
{
	int a = 0;
	int b;
	int product;

	while (a < 10)
	{
		_putchar(48);
		for (b = 1; b < 10; b++)
		{
			product = a * b;
			_putchar(',');
			_putchar(' ');
			if (product < 10)
			{
				_putchar(' ');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
		a++;
	}
}
