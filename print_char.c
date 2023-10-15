#include "main.h"

/**
 * prin_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_char(va_list listr)
{
	_putchar(va_arg(list, int));
	return (1);
}
