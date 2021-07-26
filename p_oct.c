#include "holberton.h"
/**
  * print_oct - print octal format of decimal num
  * @num: int
  *
  * Return: number of bytes
  */
int print_oct(int num)
{
	int count = 0;

	if (num)
	{
		if (num >= 1)
		{
			print_oct(num / 8);
			count += _putchar((num % 8) + '0');
		}
		else
		{
			return (-1);
		}
	}
	return (count);
}
