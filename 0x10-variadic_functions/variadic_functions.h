#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void *print_char(va_list);
void *print_int(va_list);
void *print_float(va_list);
void *print_string(va_list);

/**
 * struct type
 *
 * @c: character
 * @f: function
 */
struct type
{
	char c;
	void (*f)(va_list);
};
typedef struct type tipos;
#endif
