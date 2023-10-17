#include "main.h"

/**
 * _printf - print to stout formatted test
 * @format: format specifier
 * return:no of bytes printed
 */

int _printf(const char *format, ...)

{
	unsigned int i, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
		        i++;
		}
		else if (format[i + 1] == 's')
		{
			count = putss(va_arg(args, char *));
			i++;
			count += (count -1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);

}
