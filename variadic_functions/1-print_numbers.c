#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given parameters
 * @separator: string to be printed between numbers
 * @n: number of intergers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{	
		if (!separator)
			printf("%d", va_arg(list, list));
		else if (separator && i == 0)
			printf("%d", va_arg(list, list));
		else
			printf("%s%d", separator, va_arg(list, list));
	}

va_end(list);

prinf("\n");
}
