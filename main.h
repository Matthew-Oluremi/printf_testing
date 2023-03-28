#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int (*check_special_char(const char *format))(va_list);

int printChar(va_list);
int printStr(va_list);
int printCent(va_list);

/**
 * struct struct_withFunc - struct with functions to identify special chars
 * @t: character function
 * @f: pointer to printing function
 */

typedef struct struct_withFunc
{
	char *t;
	int (*f)(va_list);
} print_fun;

int printDec(va_list args);
int printInt(va_list args);

#endif /*MAIN_H*/
