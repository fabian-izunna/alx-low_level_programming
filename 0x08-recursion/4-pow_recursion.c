#include "main.h"

/**
* _pow_recursion - ploower func
* @x: base no
* @y: the powewr
* Return: the ans
*/
int _pow_recursion(int x, int y)
{
	int ans;

	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
	{
		ans = x * _pow_recursion(x, (y - 1));
		return (ans);
	}
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	return (0);
}
