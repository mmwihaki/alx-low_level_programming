#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 *
 * @format: list of types of arguments passed to the function
 *
 * description - function that prints anything
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *f = format;

	va_start(args, format);

	while (*f != '\0')
	{
		if (*f == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if(*f == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (*f == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (*f == 's')
		{
			char *str = va_arg(args, char *);
			printf("%s", (str ? str : "(nil)"));
		}
		f++;
	}

	va_end(args);

	printf("\n");
}
