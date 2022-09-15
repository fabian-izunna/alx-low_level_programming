#include "main.h"

/**
* more_numbers - prints numbers
* Return: void
*/
void more_numbers(void)
{
	int i = 1;
	char n, num;

	while (i <= 10)
	{
		num = 0;

		while (num <= 14)
		{
			n = num;
			if (n >= 10)
			{
				_putchar('1');
				n = n % 10;
			}
			_putchar('0' + n);
			num++;
		}
	_putchar(10);
	i++;
	}
}
