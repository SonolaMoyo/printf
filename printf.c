#include "main.h"

conversion_specif definition(int i);

/**
 * _printf - Program used for formated printing.
 * @format: First argument of printf
 * Return: Number of caracters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, j, total_char = 0, flag, specifiers_len = 14;
	conversion_specif specifiers[14];

	va_start(list, format);
	if (format == NULL)
		return (-1);

	for (i = 0; i < specifiers_len; i++)
		specifiers[i] = definition(i);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{

			flag = 0;
			i++;
			for (j = 0; j < specifiers_len; j++)
			{
				if (specifiers[j].c_s == format[i])
				{
					total_char = specifiers[j].f(list, total_char);
					flag = 1;
				}
			}
			if (flag == 0)
			{
				_buffer(format[i - 1]);
				_buffer(format[i]);
				total_char = total_char + 2;
			}
		}
		else
		{
			_buffer(format[i]);
			total_char++;
		}
	}

	_buffer(-1);
	va_end(list);
	return (total_char);
}

conversion_specif definition(int i)
{
	conversion_specif specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsignedInt},
		{'o', print_octal},
		{'x', print_hexadecimal},
		{'X', print_hexCapital},
		{'S', print_custom_s},
		{'r', print_reverse},
		{'R', print_rot13},
		{'p', print_pointer},
		{'%', print_percentage}};

	return (specifiers[i]);
}
