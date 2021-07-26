#include "holberton.h"
/**
  * print_bin - print the binary of the number
  * @num: int
  *
  * Return: number of bytes
  */
int print_bin(unsigned int num)
{
	int count = 0;

	if (num)
	{
		if (num >= 1)
		{
			print_bin(num / 2);
			count += _putchar((num % 2) + '0');
		}
	}
	return (count);
}
