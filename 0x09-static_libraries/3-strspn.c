#include "main.h"

/**
* _strspn - returns no of bytes bin segnrnt s
* @s: The str
* @accept: The src
* Return: returns no of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

