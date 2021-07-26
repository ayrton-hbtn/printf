#include "holberton.h"

/**
 * print_int - print integers
 * @i: int
 *
 * Return: int
 */
int print_int(int num)
{
	int x = num;
	int i = 0;

	if (num == 0)
		_putchar('0');
	if (num)
	{
		if (num < 0)
		{
			_putchar('-');
			x = -x;
		}
		if ((x / 10) > 0)
			print_int(x / 10);
		i += _putchar((x % 10) + '0');
	}
	return (i);
}

