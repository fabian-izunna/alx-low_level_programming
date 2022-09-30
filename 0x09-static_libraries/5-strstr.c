#include "main.h"

/**
* _strstr - Locates a substring
* @haystack: The str searched
* @needle: The substring searched for
* Return: a pointer to the beginning of the located substring,
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
