#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct types - struct
 *
 * @c: character
 * @f: function
 * Description: long struct descr
 */
struct types
{
	char *c;
	void (*f)();
};
typedef struct types type;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *str, va_list);
void print_int(char *str, va_list);
void print_float(char *str, va_list);
void print_string(char *str, va_list);
#endif
