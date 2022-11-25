#include "main.h"

/**
 * print_percentage - Prints a percentage simbol
 * @o: nothing
 * @b: Buffer where the characters to be print are save
 * @n: Position in the buffer
 * Return: number of characters printed.
 */
int print_percentage(va_list o __attribute__((__unused__)), int n)
{
	_buffer('%');
	return (n + 1);
}