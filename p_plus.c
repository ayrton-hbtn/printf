#include "holberton.h"

/**
 * print_int - print integers with plus sign
 * @num: int
 *
 * Return: int, byte count
 */
int print_plus_int(long int num)
{
	long int x = num;
	int i = 0;

	if (x == 0)
		i += _putchar('+');
	if (num)
	{
		if (num < 0)
		{
			i += _putchar('-');
			x = -x;
		}
		else
		{
			i += _putchar('+');
		}
		if ((x / 10) > 0)
			i += print_int(x / 10);
		i += _putchar((x % 10) + '0');
	}
	else
	{
		i += _putchar(num + '0');
	}
	return (i);
}
