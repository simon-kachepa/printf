#include "main.h"

/**
 * print_hexadecimal - Function that prints hexadecimal value of a number.
 * @bns_list: Number to be evaluated for its hexadecimal.
 * Return: int.
 */
int print_hexadecimal(va_list bns_list)
{
	int bns_index, bns_count;
	int *array;
	unsigned int number, tmp;

	bns_count = 0;
	number = va_arg(bns_list, unsigned int);
	tmp = number;
	while (number / 16 != 0)
	{
		number /= 16;
		bns_count++;
	}
	bns_count++;
	array = malloc(bns_count * sizeof(int));

	bns_index = 0;
	while (bns_index < bns_count)
	{
		array[bns_index] = tmp % 16;
		tmp /= 16;
		bns_index++;
	}
	for (bns_index = bns_count - 1; bns_index >= 0; bns_index--)
	{
		if (array[bns_index] > 9)
			array[bns_index] = array[bns_index] + 39;
		bns_putchar(array[bns_index] + 48);
	}
	free(array);
	return (bns_count);
}
