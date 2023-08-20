#include "main.h"

/**
 * bns_puts - A function that prints a string of characters
 * @str: The string input to be printed
 * Return: Size of str
 */

int bns_puts(char *str)
{
	int bns_index,  bns_count = 0;

	if (str)
	{
		for (bns_index = 0; str[bns_index] != '\0'; bns_index++)
		{
			bns_putchar(str[bns_index]);
			bns_count++;
		}
	}

	return (bns_count);
}
