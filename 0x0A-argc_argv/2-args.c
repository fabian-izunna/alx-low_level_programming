#include "main.h"
#include <stdio.h>

/**
* main - Prints all arguments passed into main
* @argc: the arg
* @argv: arg vector
* Return: (0)
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
