#include <stdio.h>
/**
  * main - Entry Point
  *
  * Description - a program that prints the alphabet in lowercase
  *
  * Return: always 0 (success)
  */
int main(void)
{
	int l = 97;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}

