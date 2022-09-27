#include "main.h"

/**
* _strchr - Locates a char
* @s: The string
* @c: The char
* Return: c or null
*/
char *_strchr(char *s, char c)
{
	int i;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
