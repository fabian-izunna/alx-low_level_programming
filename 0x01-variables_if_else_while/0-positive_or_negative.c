#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
* main - prints whether a number is positive or negative
* Return: 0 if exited properly non-zero otherwise
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive \n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative \n", n);
	}
	else
	{
		printf("%d is zero \n", n);
	}
	return (0);
}
