#ifndef BNS_HAEADER_FILE
#define BNS_HAEADER_FILE

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct bns_struct - VAriable of type struct for format specifiers
 * @bns_ptr: Pointer to characters specifiers
 */
typedef struct bns_struct
{
	char bns_ptr;
	int (*bns_func)(va_list);
} bns_print_f;

int _printf(const char *format, ...);
int bns_putchar(char c);
int bns_puts(char *str);
int (*case_func(const char y))(va_list);
int print_num(va_list num);

#endif
