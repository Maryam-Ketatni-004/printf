#include "main.h"

/**
 * print_int - Prints an int
 * @ptr: A pointer that point at the arg.
 *
 * Return: The number of int printed.
 */
int print_int(va_list ptr)
{
	int in;
	unsigned int int_in, int_tmp, count, dv, isn;

	in = va_arg(ptr, int);

	isn = 0;

	if (in < 0)
	{
		int_in = in * -1;
		write(1, "-", 1);
		isn = 1;
	}
	else
	{
		int_in = in;
	}

	int_tmp = int_in;
	dv = 1;

	while (int_tmp > 9)
	{
		dv *= 10;
		int_tmp /= 10;
	}

	for (count = 0; dv > 0; dv /= 10, count++)
	{
		char c = ((int_in / dv) % 10) + '0';

		write(1, &c, 1);

	}
	return (count + isn);
}
