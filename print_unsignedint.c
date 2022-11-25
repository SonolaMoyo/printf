#include "main.h"

/**
 * print_unsignedInt - Prints unsigned integers.
 * @_unsignedinteger: Decimal to be printed - inside va_list
 * @number: Position in the buffer
 * Return: number of characters printed.
 */
int print_unsignedInt(va_list _unsignedinteger, int number)
{
	unsigned int n, i, j;
	unsigned int n1;
	unsigned int z = 1;

	n = va_arg(_unsignedinteger, unsigned int);

	if (n == 0)
	{
		_buffer('0');
		return (number + 1);
	}
	else if (n == 1)
	{
		_buffer('1');
		return (number + 1);
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
