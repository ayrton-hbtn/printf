#include "holberton.h"
#include <stdarg.h>
#define BUF_SIZE 1024
/**
 * _printf - prints text to screen, redirects num of bytes to stdout
 * @format: character string
 * Return: int, num of bytes
 */
int _printf(const char *format, ...)
{
	va_list vl;
	int i = 0, count = 0, flag = 0;

	if (format)
	{
		va_start(vl, format);
		for (; format[i] != '\0'; i++)
		{
			if (!flag)
			{
				if (format[i] != '%')
					count += _putchar(format[i]);
				else
					flag = 1;
			}
			else
			{
				switch (format[i])
				{
				case 'c':
					count += _putchar(va_arg(vl, int));
					break;
				case 's':
					count += print_str(va_arg(vl, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += print_int(va_arg(vl, int));
					break;
				case 'i':
					count += print_int(va_arg(vl, int));
					break;
				case 'b':
					count += print_bin(va_arg(vl, unsigned int));
					break;
				case 'u':
					count += print_unt(va_arg(vl, unsigned int));
					break;
				case 'o':
					count += print_oct(va_arg(vl, int));
					break;
				case 'x':
					count += print_hexMin(va_arg(vl, unsigned int));
					break;
				case 'X':
					count += print_hex(va_arg(vl, unsigned int));
					break;
				case 'S':
					count += print_Str(va_arg(vl, char *));
					break;
				case '\0':
					return (-1);
				}
				flag = 0;
			}
		}
		va_end(vl);
	}
	else if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	return (count);
}
