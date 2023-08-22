#include <stdarg.h>
#include "main.h"

/**
 * _printf - A function that produces output according to a format
 * @format: input character string for _printf
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int bns_index, bns_count = 0, bns_str_count;
	va_list bns_list;

	if (!format)
		return (-1);
	va_start(bns_list, format);
	for (bns_index = 0; format[bns_index] != '\0'; bns_index++)
	{
		if (format[bns_index] != '%')
		{
			bns_putchar(format[bns_index]);
			bns_count++;
		}
		else
		{
			if (format[bns_index + 1] == '\0')
				return (-1);
			switch (format[bns_index + 1])
			{
				case 'c':
					bns_putchar(va_arg(bns_list, int));
					bns_index++, bns_count++;
					break;
				case 's':
					bns_str_count = bns_puts(va_arg(bns_list, char *));
					bns_index++, bns_count += bns_str_count;
					break;
				case '%':
					bns_putchar('%');
					bns_index++, bns_count++;
					break;
				default:
					bns_putchar(format[bns_index]);
					bns_count++;
			}
		}
	}
	va_end(bns_list);
	return (bns_count);
}
