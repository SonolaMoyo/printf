#include "main.h"

/**
 * print_binary - Converts a decimal number to binary and prints it.
 * @dectobin: Decimal number to be converted - inside va_list
 * @number: Position in the buffer
 * Return: number of characters printed.
 */
int print_binary(va_list dectobin, int number)
{
	unsigned int dec = va_arg(dectobin, unsigned int);

	int i, j;
	char bin[300];

	if (dec == 0)
	{
		_buffer('0');
		return (number + 1);
	}

	for (i = 0; dec != 0; i++)
	{
		bin[i] = (dec % 2) + '0';
		dec = dec / 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_buffer(bin[j]);
		number++;
	}
	return (number);
}
