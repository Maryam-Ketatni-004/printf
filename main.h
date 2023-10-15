#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


/**
 * struct convrt - defne a struct for symbols and fnction
 *
 * @dr: The operator
 * @g: The function associated
 */

struct convrt
{
	char *dr;
	int (*g)(va_list);
};
typedef struct convrt convr_t;

/* print_string */

int printf_strg(va_list val);



#endif
