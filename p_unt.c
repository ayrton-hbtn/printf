#include "holberton.h"

/**
 * print_unt - print integers without sign
 * @num: int
 *
 * Return: int
 */
int print_unt(unsigned long int num)
{
	unsigned int x = num;
	int i = 0;

	if (num <= 0)
		return (-1);
	if (num)
	{
		if ((x / 10) > 0)
			i += print_unt(x / 10);
		_putchar((x % 10) + '0');
		i++;
	}
	return (i);
}

