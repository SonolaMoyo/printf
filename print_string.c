#include "main.h"

/**
 * print_string - Prints strings.
 * @_string: String to be printed - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_string(va_list _string, int number)
{
	char *s = va_arg(_string, char *);
	int i;
	char nu[7] = "(null)";

	if (s == NULL)
	{
		for (i = 0; i < 6; i++)
		{
			_buffer(nu[i]);
			number++;
		}
		return (number);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_buffer(s[i]);
		number++;
	}
	return (number);
}
