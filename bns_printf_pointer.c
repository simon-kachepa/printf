#include "main.h"

/**
 * print_pointer - Function to print to print address values.
 * @bns_list: input argument
 * Return: int
 */
int print_pointer(va_list bns_list)
{
	void *ptr;
	char *str = "(nil)";
	long int input;
	int bns_count, bns_index;

	ptr = va_arg(bns_list, void*);
	if (ptr == NULL)
	{
		bns_index = 0;
		for (str[bns_index] != '\0')
		{
			bns_putchar(str[bns_index]);
			bns_index++;
		}
		return (bns_index);
	}

	input = (unsigned long int)ptr;
	bns_putchar('0');
	bns_putchar('x');
	bns_count = print_hex_ptr(input);
	return (bns_count + 2);
}
