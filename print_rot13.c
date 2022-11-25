#include "main.h"

/**
 * print_rot13 - Prints strings in rot13.
 * @_string: String to be printed in rot13 - inside va_list
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_rot13(va_list _string, int number)
{
	char *s = va_arg(_string, char *);
	int i, j;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (input[j] == s[i])
			{
				_buffer(output[j]);
				number++;
				break;
			}
		}
		if (input[j] != s[i])
		{
			_buffer(s[i]);
			number++;
		}
	}
	return (number);
}
