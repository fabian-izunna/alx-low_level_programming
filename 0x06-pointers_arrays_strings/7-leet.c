#include "main.h"

/**
* leet - encodes str
* @str: char array
* Return: encoded str
*/
char *leet(char *str)
{
	int i = 0;
	int j;
	char code[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == code[j] ||
			    str[i] - 32 == code[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
