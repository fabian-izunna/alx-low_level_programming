#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints product
* @argc: arg count
* @argv: arg pointer
* Return: 1
*/
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;
		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);
		printf("%d\n", j);
	}
	return (0);
}
