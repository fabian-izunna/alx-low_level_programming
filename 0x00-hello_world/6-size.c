#include <stdio.h>

/**
* main - prints the size of various data types
* Return: 0 if executed properly non-zero otherwise
*/
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %c byte(s)\n", sizeof(int));
	printf("Size of a long int: %c byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %c byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return(0);
}
