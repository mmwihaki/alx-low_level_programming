#include <stdio.h>
#include <stdlib.h>
void print_opcodes(void(*func)(int, char **), int num_bytes);
/**
 * main - entry point
 * @argc: number of command-line arguments
 * argv: array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((void (*)(int, char **))main, num_bytes);

	return (0);
}

/**
 * print_opcodes - prints function opcodes
 * @func: function pointer
 * @num_bytes: bytes to print
 */
void print_opcodes(void(*func)(int, char **), int num_bytes)
{
	int i;

	unsigned char *opcodes = (unsigned char *)func;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", opcodes[i]);
	}

	printf("\n");
}
