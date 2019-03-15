#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: input value
 *
 * @n: char input return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *s;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(list, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && a < n -1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
