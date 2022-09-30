 #include "main.h"

/**
* _strncpy - Copies string
* @dest: The str
* @src: The str copied
* @n: The no of bytes
* Return: A pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
