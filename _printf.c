#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints strings and characters
 * @format: pointer to string to be printed
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	int i, numOfBytes, tmp;

	va_list args;

	va_start(args, format);

	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			tmp = write(1, &format[i], 1);	/*this prints the average letter*/
			numOfBytes += tmp;
			i++;
		}
		else
		{
			f = check_special_char(&format[i + 1]); /*returns function*/
			if (f != NULL)
			{
				tmp = f(args); /*apply function to args and save bytes to tmp*/
				numOfBytes += tmp;
				i += 2;
			}
			else if (format[i + 1] == '\0')
			{
				break;
			}
			else if (format[i + 1] != '\0')
			{
				tmp = write(1, &format[i + 1], 1);
				numOfBytes += tmp;
				i += 2;
			}
		}
	}
	return (numOfBytes);
}
