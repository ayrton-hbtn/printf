#include "holberton.h"
/**
  * print_oct - print octal format of decimal num
  * @num: int
  *
  * Return: number of bytes
  */
int print_octH(unsigned int num)
{
	unsigned int x = num;
	int count = 0;

	if (num == 0)
	{
		count += _putchar('0');
		count += _putchar('0');
	}
	if (num)
	{
		count += _putchar('0');
		if (x >= 1)
		{
			count += print_oct(x / 8);
			count += _putchar((x % 8) + '0');
		}
		else
		{
			return (-1);
		}
	}
	return (count);
}
