#endif
#include "main.h"
/**
 * printf_strg - print the string.
 * @vl: argumen t.
 * Return: the leng of the str.
 */

int printf_strg(va_list vl)
{
	char *k;
	int j, len;

	s = va_arg(vl, char *);
	if (k == NULL)
	{
		k = "(null)";
		len = _strlen(k);
		for (j = 0; j < len; j++)
			_putchar(s[j]);
		return (len);
	}
	else
	{
		len = _strlen(k);
		for (j = 0; j < len; j++)
			_putchar(k[j]);
		return (len);
	}
}
