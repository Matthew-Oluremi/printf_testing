#include "main.h"

/**
 * printDec - if va_list argument is an integer, this function prints it
 * @args: variadic parameter holding int parameter from printf
 * Return: number of bytes printed
 */

int printDec(va_list args)
{
	int i; /*array itterator*/
	int numOfBytes; /*will hold record of bytes printed*/
	int int_array[15];/*array to hold the individual digits of integer*/
	int tmp;/*temporary variable to hold integer*/
	char tmpChar[1];

	tmp = va_arg(args, int);/*save parameter extracted from printf*/

	while (tmp != 0)
	{
		int_array[i] = (tmp % 10);/*save individual digits to array*/
		tmp = tmp / 10; /*update value of tmp*/
		if (tmp == 0)/*tmp equal to zero, no more separation of digits*/
		{
			break;
		}
		else
			i++;
	}

	/*loop through individual digit array*/
	while (i >= 0)
	{
		/*convert integer to char and save to char array*/
		tmpChar[0] = (48 + int_array[i]);
		numOfBytes = numOfBytes + write(1, tmpChar, 1);
		i--;
	}
	return (numOfBytes);
}
