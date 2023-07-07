#include "main.h"
#include <stdio.h>
/**
  * set_bit - set value of bit to 1 at given index
  * @n: int
  * @index: index
  * description - set value of bit at index
  * Return: 1, -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;
	num <<= index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = (*n & -num) | num;

	return (1);
}
