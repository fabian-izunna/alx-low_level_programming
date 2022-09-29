#include "main.h"

/**
* s_root - finds the root
* @num: the no
* @root: the sq root
* Return: int
*/
int s_root(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root == num / 2)
		return (-1);
	return (s_root(num, (root + 1)));
}

/**
* _sqrt_recursion - eturns the natural square root of a number
* @n: the no
* Return: the root or -1
*/
int _sqrt_recursion(int n)
{
	int root = 1;

	if (n <= 0)
		return (-1);
	return (s_root(n, root));
}
