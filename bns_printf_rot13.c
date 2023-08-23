#include "main.h"

/**
 * print_rot13 - A function that prints a string to ROT13 place into buffer
 * @bns_list: input argument
 * Return: int
 */

int print_rot13(va_list bns_list)
{
	int bns_index, bns_count, i, j;
	char *str;
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	bns_count = 0;
	str = va_arg(bns_list, char*);
	if (str == NULL)
		str = "(null)";
	bns_index = 0;
	while (str[bns_index])
	{
		j = 0;
		for (i = 0; alpha[i] && !j; i++)
		{
			if (str[bns_index] == alpha[i])
			{
				bns_putchar(beta[i]);
				bns_count++;
				j = 1;
			}
		}
		if (!j)
		{
			bns_putchar(str[bns_index]);
			bns_count++;
		}
		bns_index++;
	}
	return (bns_count);
}
