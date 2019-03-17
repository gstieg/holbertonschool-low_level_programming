#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

/**
 * struct form - format
 *
 * @c: char of format
 *
 * @f: pointer
 *
 * Description: calls the right function
 */
typedef struct form
{
	char c;
	void (*f)(va_list);
} form_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
