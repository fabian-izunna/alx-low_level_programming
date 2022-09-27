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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
