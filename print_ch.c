#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * printChar - prints a character
 * @args: va_list parameter
 * Return: numbers of bytes printed
 */

int printChar(va_list args)
{
	int byteS = 0;

	char c;

	c = (char)va_arg(args, int);

	if (c)
	{
		write(1, &c, 1);
		byteS++;
		return (byteS);
	}
	return (0);
}
