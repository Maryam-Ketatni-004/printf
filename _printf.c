#include "main.h"

/**
 * _printf-print anything
 * @format: the format string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int num = 0;
	va_list ap;
	char *pp, *start;
	params_t params = PARAMS_INIT;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[2]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	return (-1);
	for (pp = (char *)format; *pp; pp++)
	{
		init_params(&params, ap);
		if (*pp != '%')
		{
			num += _putchar(*pp);
			continue;
		}
		start = pp;
		pp++;
		while (get_flag(pp, &params))
		{
			pp++;
		}
		get_width(pp, &params, ap);
		pp = get_precision(pp, &params, ap);
		if (get_modifier(pp, &params))
			pp++;
		if (!get_specifier(pp))
			num += print_from_to(start, pp,
				params.l_modifier || params.h_modifier ? pp - 1 : 0);
		else
			num += get_print_func(pp, ap, &params);
	}
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (num);
}
