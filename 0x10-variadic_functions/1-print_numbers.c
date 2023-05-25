#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - print numbers
 *
 * @separator: string between numbers
 *
 * @n: number if integers passed
 *
 * description - print numbers \n
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
