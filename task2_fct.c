#include "main.h"

/**
 * print_binary - Prints an unsigned int as binary.
 * @ptr: A pointer that points at the arg.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list ptr)
{
	unsigned int q = va_arg(ptr, unsigned int);
	int ch_count = 0;
	char buf[32];
	int count = 0;

	if (q == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (q > 0)
	{
		buf[count++] = (q % 2) + '0';
		q /= 2;
	}

	ch_count = count;
	while (count--)
		write(1, &buf[count], 1);
	return (ch_count);
}
