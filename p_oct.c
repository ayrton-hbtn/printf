#include "holberton.h"
/**
  * print_oct - print octal format of decimal num
  * @num: int
  *
  * Return: number of bytes
  */
int print_oct(unsigned int num)
{
	unsigned int x = num;
	int count = 0;

	if (num)
	{
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
