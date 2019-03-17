#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * p_char - prints char
 *
 * @list: list
 */
void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * p_int - prints int
 *
 * @list: list
 */
void p_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * p_float - prints float
 *
 * @list: list
 */
void p_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * p_string - prints string
 *
 * @list: list
 */
void p_string(va_list list)
{
	char *a = va_arg(list, char *);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}

/**
 * print_all - print all
 *
 * @format: arg format
 */
void print_all(const char * const format, ...)
{
	form_t forms [] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_string},
		{'\0', NULL}
	};
	va_list list;
	int a1 = 0, a2 = 0;
	char *b1 = "", *b2 = ",";

	va_start(list, format);
	while (format != NULL && format[a1].c != '\0')
	{
		a2 = 0;
		while (forms[a2].c != '\0')
		{
			if (format[a1] == forms[a2].c)
			{
				printf("%s", b1);
				forms[a2].f(list);
				b1 = b2;
			}
			a2++;
		}
		a1++;
	}
	printf("\n");
	va_end(list);
}
