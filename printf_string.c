#include "main.h"

/**
 * printStr - use variadic functin to access string parameter in printf
 * @args: variadic variable that holds printf string parameter
 * Return: -1 on failure, number of bytes printed on success
 */

int printStr(va_list args)
{
	/*this variable will count bytes returned by write function*/
	int numOfBytes;

	/*variable to itterate through loop*/
	int itterator;

	/*pointer to string var that will be read from print argument list*/
	char *strArg;

	numOfBytes = 0;
	itterator = 0;

	/*use variadic variable to extract string argument from print*/
	strArg = va_arg(args, char *);

	/*check if va_arg returned null*/
	if (strArg == NULL)
	{
		return (-1);
	}

	/*use while loop to itterate through str variable*/
	while (strArg[itterator])
	{
		/*assign number of bytes returned by write to numOfBytes*/
		numOfBytes = write(1, &strArg[itterator], 1);
		itterator++;
	}
	return (numOfBytes);
}
