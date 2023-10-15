#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert - defines a structure for symbols and fonctions
 *
 * @sm: the operator
 * @f: the function associated
 */

struct convert
{
	char *sm;
	int (*f)(va_list);
};
typedef struct convert convert_t;

int _printf(const char *format, ...);
int print_char(va_list);

#endif
