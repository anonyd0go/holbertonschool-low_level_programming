#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * struct print_format - organizes respective print functions
 * @format: Character that rapresents the desired format
 * @func: Function pertaining to the desired format
 */
typedef struct print_format
{
char *format;
void (*func)(va_list);
} tprnt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
