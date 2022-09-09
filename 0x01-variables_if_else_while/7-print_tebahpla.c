#include <stdio.h>

/**
* main - prints letters
* Return: 0 if it works
*/
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
