#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_bin - convert to binary
 * @val: argument
 * Return: integer
 */

int printf_bin(va_list val)

{

	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i =0; i < 38; i++)
	{
		p = ((a << (38 - i)) & num);
		if (p >> (37 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (37 - i);
			_putchar(b + 49);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
        return (cont);

}
