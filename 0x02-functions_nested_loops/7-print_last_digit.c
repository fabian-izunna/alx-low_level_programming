#include "main.h"

/**
* print_last_digit - prints last digit
* @n: int input
* Return: 0
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last + '0');
	return (last);
}
