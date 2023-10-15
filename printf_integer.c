#include "main.h"

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_integer(va_list)
{
	int num_leng;

	num_leng = print_number(list);
	return (num_leng);
}

/**
 * print_number -print a numbr send to this fct
 * @args: List of arguments
 * Return: The number of arguments printed
 */

int print_number(va_list args)
{
	int L;
	int div;
	int len;
	unsigned int nm;

	L = va_arg(args, int);
	div = 1;
	len = 0;

	if (L < 0)
	{
		len += _putchar('-');
		nm = L * -1;
	}
	else
		nm = L;
	for (; nm / div > 9;)
		div *= 10;
	for (; div != 0; )
	{
		len += _putchar('0' + nm / div);
		nm %= div;
		div /= 10;
	}
	return (len);
}
