#include "main.h"

/**
 * print_octal - function that prints octal of a number
 * @bns_list: Number to be evaluated for octal value
 * Return: int
 */
int print_octal(va_list bns_list)
{
	int bns_index, bns_count;
	int *array;
	unsigned int number, tmp;

	bns_count = 0;
	number = va_arg(bns_list, unsigned int);
	tmp = number;
	while (number / 8 != 0)
	{
		number /= 8;
		bns_count++;
	}
	bns_count++;
	array = malloc(bns_count * sizeof(int));

	bns_index = 0;
	while (bns_index < bns_count)
	{
		array[bns_index] = tmp % 8;
		tmp /= 8;
		bns_index++;
	}
	for (bns_index = bns_count - 1; bns_index >= 0; bns_index--)
	{
		bns_putchar(array[bns_index] + 48);
	}
	free(array);
	return (bns_count);
}
