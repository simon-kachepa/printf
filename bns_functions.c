#include "main.h"

/**
 * print_num - Entry point. Print number
 * @num: Variable va_list
 * Return: Number of bytes
 */
int print_num(va_list num)
{

	long int number;
	int bns_count, tmp_val, base_ten;

	bns_count = 0;
	number = va_arg(num, int);

	if (number < 0)
	{
		number *= -1;
		bns_putchar('-');
		bns_count++;
	}
	if ((number >= 0) && (number <= 9))
	{
		bns_putchar(number + '0');
		bns_count++;
	}
	if (number > 9)
	{
		base_ten = 10;

		while ((number / base_ten) > 9)
		{
			base_ten *= 10;
		}

		while (base_ten > 0)
		{
			tmp_val = number / base_ten;
			number = number % base_ten;
			bns_putchar(tmp_val + '0');
			base_ten = base_ten / 10;
			bns_count++;
		}
	}
	return (bns_count);
}
