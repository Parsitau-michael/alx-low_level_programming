#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	const char *ptr = format;

	va_start(args, format);
	while (*ptr)
	{
		if (*ptr ==  'c')
		{
			printf("%c", (char)va_arg(args, char));
		}
		else if (*ptr == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (*ptr == 'f')
		{
			printf("%f", (float)va_arg(args, double));
		}
		else if (*ptr == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
