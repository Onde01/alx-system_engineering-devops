#ifndef MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int putss(char *c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int printf_bin(va_list val);

#endif
