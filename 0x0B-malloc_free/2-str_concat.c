#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - Conc str
* @s1: The str
* @s2: The str
* Return: something
*/
char *str_concat(char *s1, char *s2)
{
	char *str_concatenate;
	int i, concat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	str_concatenate = malloc(sizeof(char) * len);
	if (str_concatenate == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str_concatenate[concat_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		str_concatenate[concat_i++] = s2[i];
	return (str_concatenate);
}
