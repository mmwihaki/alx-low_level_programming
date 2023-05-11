#include "main.h"
/**
  * factorial - return factorial
  *
  * @n: input
  *
  * description - return factorial of a number
  * Return: Always 0
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
