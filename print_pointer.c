#include "main.h"

/**
 * print_pointer - Prints the adress of a variable.
 * @_string: String to be printed - inside va_list
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_pointer(va_list _string, int number)
{
	unsigned long int dec = va_arg(_string, unsigned long int);
	int i, j;
	unsigned int temp;
	char hex[300];
	char nu[] = "(nil)";

	if (dec == 0)
	{
		for (i = 0; nu[i] != '\0'; i++)
		{
			_buffer(nu[i]);
			number++;
		}
		return (number);
	}
	if (dec == 0)
	{
		_buffer('0');
		return (number + 1);
	}
	_buffer('0');
	_buffer('x');
	number += 2;
	for (i = 0; dec != 0; i++)
	{
		temp = 0;
		temp = dec % 16;
		if (temp < 10)
			hex[i] = temp + 48;
		else
			hex[i] = temp + 87;
		dec = dec / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_buffer(hex[j]);
		number++;
	}
	return (number);
}
