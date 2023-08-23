#include "main.h"
/**
 * print_string - A function print exclusuives string.
 * @bns_list: The input argument
 * Return: int
 */

int print_string(va_list bns_list)
{
	char *str;
	int bns_index, bns_count;
	int num;

	bns_count = 0, bns_index = 0;
	str = va_arg(bns_list, char *);
	if (str == NULL)
		str = "(null)";
	while (str[bns_index] != '\0')
	{
		if (str[bns_index] < 32 || str[bns_index] >= 127)
		{
			bns_putchar('\\');
			bns_putchar('x');
			bns_count += 2;
			num = str[bns_index];
			if (num < 16)
			{
				bns_putchar('0');
				bns_count++;
			}
			bns_count += print_hex_ptr(num);
		}
		else
		{
			bns_putchar(str[bns_index]);
			bns_count++;
		}
		bns_index++;
	}
	return (bns_count);
}
