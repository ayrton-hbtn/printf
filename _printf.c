#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - prints text to screen, redirects num of bytes to stdout
 * @format: character string
 * Return: int, num of bytes
 */
int _printf(const char *format, ...)
{
	/* va_list vl; */
	int i = 0, count = 0, flag = 0;

	if (format)
	{
		for (; format[i] != '\0'; i++)
		{
			if (!flag)
			{
				if (format[i] != '%')
				{
					count += _putchar(format[i]);
				}
				else
				{
					flag = 1;
				}
			}
			else
			{
				switch (format[i])
				{
				case 'c':
					_putchar('h');
					break;

				case 's':
					_putchar('t');
					break;

				case '%':
					_putchar('.');
					break;
				}
				flag = 0;
			}
		}
	}
	return (count);
}
