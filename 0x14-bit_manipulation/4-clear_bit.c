#include "main.h"
#include <stdio.h>
/**
  * clear_bit - set value of bit to 0 at index
  * @n: int
  * @index: index
  * description - set value of bit to 0
  * Return: 0
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	num <<= index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if ((*n & num) != 0)
	{
		*n ^= num;
	}

	return (1);
}
