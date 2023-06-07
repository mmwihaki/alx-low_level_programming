#include "main.h"
/**
 * _pow_recursion - return value of x raised to y
 *
 * @x: input
 * @y input
 *
 * description - return x raised to y
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
