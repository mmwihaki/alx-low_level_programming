#include "main.h"
#include <stdio.h>
/**
 * main - check code
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * description - print all arguments
 *
 * return: 0
 */
int main(int argc , char *argv [])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
