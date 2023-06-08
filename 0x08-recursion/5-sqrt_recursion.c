#include "main.h"
int initial_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - natural square root of a number
 *
 * @n: input
 *
 * description - return square root of n
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	return (initial_sqrt_recursion(n, 0));
}
/**
 * initial_sqrt_recursion - return natural squareroot
 *
 * @n: squared number
 *
 * @i: iterator
 *
 * Return: squareroot
 */

int initial_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (initial_sqrt_recursion(n, i + 1));
}
