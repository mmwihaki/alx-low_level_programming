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
	int i = 0;
	char c = va_arg(args, int);
	int num = va_arg(args, int);
	float f = va_arg(args, double);
	char *str = va_arg(args, char *);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			printf("%d", num);
		}
		else if (format[i] == 's')
		{
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		else if (format[i] == 'f')
		{
			printf("%f", f);
		}
		i++;

		printf("\n");
	}
}
