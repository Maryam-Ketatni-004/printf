#include "main.h"

/**
 * print_int - Prints an int
 * @ptr: A pointer that point at the arg.
 *
 * Return: The number of int printed.
 */
int print_int(va_list ptr)
{
	int int_input;

	usigned int int_in, int_temp, i, div, isneg;
	
	int_input = va_arg(ptr, int);

	isneg = 0;

	if (int_input < 0)
	{
		int_in = int_input * -1;
		write(1, "-", 1);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;

	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		char c = ((int_in / div) % 10) + '0';
		
		write(1, &c, 1);
	}
	return (i + isneg);
}
