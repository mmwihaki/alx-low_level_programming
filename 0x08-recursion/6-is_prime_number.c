#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - tell if an int is a prime or not
 * @n: number to check
 * description - check if number is an int
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - check number is prime recursively
 *
 * @n: number
 *
 * @i: iterator
 *
 * Return: 1 if n is prime, else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
