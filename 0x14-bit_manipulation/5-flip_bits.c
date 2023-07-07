#include "main.h"
#include <stdio.h>
/**
  * count_set_bits - count set bits
  * @n: int
  * description - count set bits
  * Return: bits
  */
unsigned int count_set_bits(unsigned long int n)
{
	unsigned int count = 0;

	while (n != 0)
	{
		n &= (n - 1);
		count++;
	}

	return (count);
}
/**
  * flip_bits - find number of bits needed to flip
  * @n: int
  * @m: int
  * description - find number of bits
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	return (count_set_bits(result));
}
