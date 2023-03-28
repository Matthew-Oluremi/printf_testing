#include "main.h"

/**
 * printCent - prints the character %
 * @args: variadic variable to hold printf parameter
 * Return: number of bytes printed
 */

int printCent(va_list args)
{
	int numOfBytes;/*count bytes printed*/

	(void)args;

	/*use write function to simply print % and allocate to numOfBytes*/
	numOfBytes = write(1, "%", 1);

	return (numOfBytes);
}
