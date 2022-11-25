#include "main.h"

/**
 * print_int - Prints an integer.
 * @_integer: Decimal number to be printed - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_int(va_list _integer, int number)
{
	int n, i, j;
	unsigned int n1;
	int z = 1;

	n = va_arg(_integer, int);

	if (n < 0)
	{
		n = -1 * n;
		_buffer('-');
		number++;
	}
	n1 = n;

	for (i = 0; n / 10 != 0; i++)
	{
		n = n / 10;
	}
	for (j = 0; j <= i - 1; j++)
	{
		z = z * 10;
	}

	for (; z != 0;)
	{
		_buffer((n1 / z) + '0');
		number++;
		n1 = n1 % z;
		z = z / 10;
	}
	return (number);
}
