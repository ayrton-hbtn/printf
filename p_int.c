#include "holberton.h"

/**
 * print_int - print integers
 * @num: int
 *
 * Return: int, byte count
 */
int print_int(int num)
{
	int x = num;
	int i = 0;

	if (num)
	{
		if (num < 0)
		{
			i += _putchar('-');
			x = -x;
		}
		if ((x / 10) > 0)
			print_int(x / 10);
		i += _putchar((x % 10) + '0');
	}
	else
	{
		i += _putchar(num + '0');
	}
	return (i);
}
