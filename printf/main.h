#ifndef MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define UNUSED(X) (VOID) ((X)
#define BUFF_SIZE 1024
#define F_MINUS 1
#define F_plus 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
#define S_LONG 2
#define S_SHORT 1

#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int putss(char *c);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int printf_bin(va_list val);
int print_flags(const char *format, int *i);
int print_width(const char *format, int *i, va_list list);
int print_size(const char *format,int *i);
int print_precision(const char *format, int *i, va_list list);
int print_reverse(va_list types, char buffer[], 
	int flags, int width, int size,int precision);
int write_char(char c, char buffer[],
         int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_pointer(char buffer[], int ind, int length,
	int widht, int flags, char padd, char extra_c, int padd_start);
int write_num(int ind, int flags, char buffer[], int width,
	int precision, int length, char padd, char extra_c);
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsignd(unsigned long int num, int size);
#endif
