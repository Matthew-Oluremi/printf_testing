#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * check_special_char - checks the struct for c or s or %
 * @format: pointer to string
 * Return: null on failure, else pointer to function
 */

int (*check_special_char(const char *format))(va_list)
{
    /*itterator used to for loop through struct*/
	int itterator;

    /*declare struct type with name specialChars*/
	print_fun specialChars[4] = {
		{"c", printChar},
		{"s", printStr},
		{"%", printCent},
		{NULL, NULL}
		};

	/*loop through struct*/
	for (i = 0; specialChars[i].t != NULL; i++)
	{
		/*check if special characters defined in struct matches character*/
		if (*(specialChars[i].t) == *format)
		{
			/*if special character mmatches, return pointer to function*/
			return (specialChars[i].f);
		}
	}
	return (NULL);
}
