#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>

/**
 * struct fmt - Struct fmt
 *
 * @op: The format
 * @f: The function associated
 */
typedef struct str_fmt
{
	char *inp_fmt;
	void (*f)(va_list list);
} fmt_a;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_*/
