#include "main.h"

/**
* string_toupper - str to upper
* @str: str to be changed
* Return: A pointer
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
