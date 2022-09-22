 #include "main.h"

/**
* _strncat - Concatenates two strings at n most
* @dest: The resulting str
* @src: The copied str
* @n: The number of bytes
* Return: A pointer to @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
