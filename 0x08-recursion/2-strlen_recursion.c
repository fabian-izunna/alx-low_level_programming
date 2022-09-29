#include "main.h"

/**
* _strlen_recursion - returns lenght of str
* @s: the str
* Return: strlen
*/
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length += 1;
		_strlen_recursion(s + 1);
	}
	return (length);
}
