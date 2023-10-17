#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int print_char(va_list ptr);
int print_int(va_list ptr);
int print_string(va_list ptr);
int print_pourcentage(void);
int _print_helper(const char *format, va_list ptr, int charcount);
int _printf(const char *format, ...);

#endif
