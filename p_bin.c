#include "holberton.h"
/**
  * print_bin - print the binary of the number
  * @num: int
  *
  * Return: number of bytes
  */
int print_bin(unsigned long int num)
{
	int count = 0;

	if (num)
	{
		if (num >= 1)
		{
			count += print_bin(num / 2);
			count += _putchar((num % 2) + '0');
		}
		else
		{
			return (-1);
		}
	}
	return (count);
}
