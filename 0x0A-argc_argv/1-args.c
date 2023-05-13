#include "main.h"
#include <stdio.h>
/**
 * main - check code
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * description - prints the number of arguments passed
 *
 * return: always 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return(0);
}
