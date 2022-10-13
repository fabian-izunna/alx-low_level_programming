#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concat n str
 * @s1: first str
 * @s2: second str
 * @n: no of bytes
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int index;
	unsigned int length = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		length++;
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);
	length = 0;
	for (index = 0; s1[index]; index++)
		ptr[length++] = s1[index];
	for (index = 0; s2[index] && index < n;)
		ptr[length++] = s2[index]
	ptr[length] = '\O';
	return (ptr);
}
