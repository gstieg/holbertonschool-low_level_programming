#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: input value
 *
 * @n: char
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	int b = 0;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		b  = va_arg(list, int);
		printf("%d", b);
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
