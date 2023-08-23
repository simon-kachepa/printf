#include "main.h"

/**
 * print_unsigned - A function that prints unsigned specifier
 * @bns_list: unsigned arguement to be evaluated
 * Return: Number of characters printed (nBytes)
 */
int print_unsigned(va_list bns_list)
{
	unsigned int number = va_arg(bns_list, unsigned int);
	int num, last_digit, digit, tmp_div, bns_count = 1;

	number /= 10;
	num = number;
	last_digit = number % 10;
	tmp_div = 1;
	bns_count = 1;

	if (last_digit < 0)
	{
		bns_putchar(45);
		num *= (-1);
		number *= (-1);
		last_digit *= (-1);
		bns_count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			tmp_div *= 10;
			num /= 10;
		}
		num = number;
		while (tmp_div > 0)
		{
			digit = num / tmp_div;
			bns_putchar(digit + 48);
			num -= (digit * tmp_div);
			tmp_div /= 10;
			bns_count++;
		}
	}
	bns_putchar(last_digit + 48);

	return (bns_count);
}
