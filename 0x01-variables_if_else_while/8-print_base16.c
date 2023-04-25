#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - prints all the numbers of base 16 in lowercase
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int i;
	int L;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (L = 97; L <= 102; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
