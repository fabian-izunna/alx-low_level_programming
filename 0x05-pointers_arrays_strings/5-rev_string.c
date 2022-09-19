#include "main.h"

/**
* rev_string - rdev string
* @s: pointer
*/
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
