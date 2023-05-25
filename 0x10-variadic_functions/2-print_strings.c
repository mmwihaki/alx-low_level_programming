#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 *
 * @separator: string printed between strings
 *
 * @n: number of strings passed
 *
 * description - function that prints strings
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
