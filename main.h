#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int print_char(va_list ptr);
int print_int(va_list ptr);
int print_string(va_list ptr);
int print_pourcentage(void);
int _printf_helper(const char *format, va_list ptr, int charcount);
int _printf(const char *format, ...);
int print_binary(va_list ptr);

#endif
