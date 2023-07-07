#include <stdio.h>
#include "main.h"
/**
  * get-bit - find value of bit at given index
  * @index: index
  * description - find value of git at given position
  * Return: value of bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	num <<= index;

	bit = (n & num) >> index;

	return (bit);
}
