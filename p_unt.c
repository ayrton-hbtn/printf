#include "holberton.h"

/**
 * print_unt - print integers without sign
 * @num: int
 *
 * Return: int
 */
int print_unt(unsigned int num)
{
	unsigned int x = num;
	int i = 0;

	if (num)
	{
		if ((x / 10) > 0)
			print_unt(x / 10);
		_putchar((x % 10) + '0');
		i++;
	}
	return (i);
}

