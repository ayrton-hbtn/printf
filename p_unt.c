#include "holberton.h"

/**
 * print_unt - print integers without sign
 * @i: int
 *
 * Return: int
 */
int print_unt(int num)
{
	int x = num;
	int i = 0;

	if (x < 0)
		x = -x;

	if (num)
	{
		if ((x / 10) > 0)
			print_unt(x / 10);
		i += _putchar((x % 10) + '0');
	}
	return (i);
}

