#include "main.h"

/**
* _buffer - saves characters to a buffer c to stdout when full
* @c: The character to save and print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _buffer(char c)
{
	static char buffer[1024];
	static int i;
i = 0;

	if (i == 1024)
	{
		write(1, buffer, 1024);
		i = 0;
	}
	if (c == -1)
		write(1, buffer, i);

	buffer[i] = c;
	i++;

	return (1);
}
