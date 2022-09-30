#include "main.h"

/**
* _strlen - the length of a string
* @s: pointer
* Return: strlen
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
