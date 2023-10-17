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

<<<<<<< HEAD
	unsigned int int_in, int_tmp, count, dv, isn;
=======
	usigned int int_in, int_temp, i, div, isneg;	
	int_input = va_arg(ptr, int);
>>>>>>> dab140d5ce792bfa2782846e6b39129d6462981e

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
<<<<<<< HEAD
		char c = ((int_in / dv) % 10) + '0';

=======

		char c = ((int_in / div) % 10) + '0';
		
>>>>>>> dab140d5ce792bfa2782846e6b39129d6462981e
		write(1, &c, 1);

	}
	return (count + isn);
}
