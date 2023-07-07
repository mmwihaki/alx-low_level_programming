#include "main.h"
#include <stdio.h>
/**
  * print_binary - print binary representation of a number
  * @n: int
  * description - print number in binary
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1;
	int pos = 0;
	int bit = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while ((n & num) == 0)
	{
		num <<= 1;
		pos++;
	}

	while (num != 0)
	{
		bit = (n & num) >> pos;
		printf("%d", bit);
		num >>= 1;
		pos--;
	}
}
