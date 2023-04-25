#include <stdio.h>
/**
  * main - entry point
  *
  * Description - print the alphabet in lowercase, and then in uppercase
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int l = 97;
	int L = 65;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (L <= 90)
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
