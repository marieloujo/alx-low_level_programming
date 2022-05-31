#ifndef _VARIADIC_FUNCTION
#define _VARIADIC_FUNCTION

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_int(va_list list);

void print_float(va_list list);

void print_char(va_list list);

void print_str(va_list list);

typedef struct print_anything
{
    char *type;
    void (*printer)(va_list);
} print_anything;

#endif
