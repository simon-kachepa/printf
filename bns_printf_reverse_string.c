#include "main.h"

/**
 * print_string_reverse - A function that prints a string in reverse
 * @bns_list: type struct va_arg where is allocated printf arguments
 * Return: int
 */
int printf_string_reverse(va_list bns_list)
{

	char *str;
	int bns_index, bns_count;

	str = va_arg(bns_list, char*);
	if (str == NULL)
		str = "(null)";
	bns_count = 0;
	while (str[bns_count] != '\0')
		bns_count++;
	bns_index = (bns_count - 1);
	while (bns_index >= 0)
	{
		bns_putchar(str[bns_index]);
		bns_index--;
	}
	return (bns_count);
}
