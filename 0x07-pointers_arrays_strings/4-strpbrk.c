#include "main.h"

/**
* _strpbrk - Searches a str
* @s: The str to be searched
* @accept: The str searched for
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
