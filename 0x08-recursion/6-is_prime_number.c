#include "main.h"

/**
* is_prime_number - shows prime numbers
* @n: the no to be checked
* Return: an int
*/
int is_prime_number(int n)
{
	if (n % n == 0 && n % 1 == 0 && n / 1 == n)
		return (1);
	else if ( n <= 1)
		return (0);
	else
		return (0);
	return (0);
}
