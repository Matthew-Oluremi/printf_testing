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
	int byteS;
	char c;

	byteS = 0;
	c = (char)va_arg(args, int);

	if (c)
	{
		byteS = write(1, &c, 1);
		return (byteS);
	}
	return (0);
}
