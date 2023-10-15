#include "main.h"

/**
 * _printf - receives the main string and all the necessary parameters t
 * print a formated string
 * @f stringormat: A string containig all the desired characters
 * printReturn: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int print_char;
	conver_t f_list[] = {
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"c", print_char},
		{"s", print_string},
		{"b", print_binary},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_string},
		{"p", print_pointer},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL},
	};
	va_list argumt_list;

	if (format == NULL)
		return (-1);

	va_start(argumt_list, format);
	print_char  =  format_reciever(format, f_list, argumt_list);
	va_end(argumt_list);
	return (print_char);
}
