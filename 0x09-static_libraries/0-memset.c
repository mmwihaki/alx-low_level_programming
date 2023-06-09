#include "main.h"
/**
  * _memset - fills memory with a constant byt
  *
  * @s: memory area
  *
  * @b: changing constant
  *
  * @n: bytes to be filled
  *
  * Return: changed array with new value for n bytes
  */
char *_memset(char *s, char b, unsigned int n)
{
	/*int i = 0;*/

	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
