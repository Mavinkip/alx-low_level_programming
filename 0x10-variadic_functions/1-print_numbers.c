#include "variadic_functions.h"

/**
 * print_numbers - it will print a number
 *
 * @separator: is the string to be printed
 * @n: is the number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	separator = (separator != NULL) ? separator : "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(list, int));
	}
	putchar(10);
}
