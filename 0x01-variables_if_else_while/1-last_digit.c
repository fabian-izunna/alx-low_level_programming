#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/*
* main - prints the last digit of a number
* Return: 0 if exited properly non-zero otherwise
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n % 10;
	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n,y);
	}
	else if (y < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n,y);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n,y);
	}
	return (0);
}
