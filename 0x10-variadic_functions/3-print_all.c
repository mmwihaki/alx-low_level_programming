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
	char * str = NULL;
	/**
	char c = va_arg(args, int);
	int num = va_arg(args, int);
	float f = va_arg(args, double);
	*/

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 's')
		{
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(args, char *));
			}
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		i++;

		printf("\n");
	}
}
