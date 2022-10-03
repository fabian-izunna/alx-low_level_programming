#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
* get_change - gets change
* @change: the change
* Return: the change
*/
int get_change(int change)
{
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int coins;

	while (change > 0)
	{
		while (change >= q)
		{
			change -= q;
			coins++;
		}
		while (change >= d)
		{
			change -= d;
			coins++;
		}
		while (change >= n)
		{
			change -= n;
			coins++;
		}
		while (change >= t)
		{
			change -= t;
			coins++;
		}
		while (change >= p)
		{
			change -= p;
			coins++;
		}
	}
	return (coins);
}

/**
* main - main funct
* @argc: arg c
* @argv: arg v
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
		return (0);
	printf("%d\n", get_change(atoi(argv[1])));
	return (0);
}
