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

/**
 *A function that prints binary value of a number
 * @num: Input number to be evaluated
 * Return: nBytes of num
 */
int print_bin(va_list num)
{
	int status = 0, bns_count = 0, bns_index,left_shift, right_shift;
	unsigned int position, number = va_arg(num, unsigned int);

	bns_index = 0, left_shift = 1;
	while ( bns_index < 32)
	{
		position = ((left_shift << (31 - bns_index)) & number);
		if (position >> (31 - bns_index))
		{
			status = 1;
		}
		if (status)
		{
			right_shift = position >> (31 - bns_index);
			bns_putchar(right_shift + '0');
			bns_count++;
		}
		bns_index++;
	}
	if (bns_count == 0)
	{
		bns_count++;
		bns_putchar('0');
	}
	return (bns_count);
}
