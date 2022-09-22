#include "main.h"

/**
* _strcat - concatenates strings
* @src: the source string
* @dest: the destiation string
* Return: the str
*/
char *_strcat(char *dest, char *src)
{
	int i = -1;
	int j = 0;

	for (j = 0; dest[j] != '\0'; j++)
		;
	do {
		i++;
		dest[j] = src[a];
		j++;
	} while (src[a] != '\0');
	return (dest);
}

