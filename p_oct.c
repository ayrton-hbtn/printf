#include "holberton.h"
/**
  * print_bin - print the binary of the number
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
	}
	return (count);
}
