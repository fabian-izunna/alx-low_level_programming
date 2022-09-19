#include "main.h"

/**
* rev_string - rdev string
* @s: pointer
*/
void rev_string(char *s)
{
	int l, i, half;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
	;
	i = 0;
	half = l / 2;
	while (half--)
	{
		temp = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
