#include <stdio.h>

/**
* main - prints alphabets
* Return: 0 if well executed
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
