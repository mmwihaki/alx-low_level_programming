#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * description - print number of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
