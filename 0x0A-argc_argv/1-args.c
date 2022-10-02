#include "main.h"
#include <stdio.h>

/**
* main - Prints the number of arguments passed into main
* @argc: arg count
* @argv: unused par
* Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
