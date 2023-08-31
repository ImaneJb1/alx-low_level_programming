#include "main.h"
/**
 * _pow_recursion - a function that returns the power of @x by @y x^y.
 *
 * Description: calculate the power x^y by using recursion methode.
 *
 * @x: integer.
 *
 * @y: the power of the integer @x.
 *
 * Return: the value of @x raised to the power of @y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
