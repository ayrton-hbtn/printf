#include "holberton.h"
/**
  * print_bin - print the binary of the number
  * @num: int
  *
  * Return: number of bytes
  */
int print_hexMin(unsigned int num)
{
	int count = 0;

	if (num)
	{
		if (num >= 1)
		{
			print_hexMin(num / 16);
			if ((num % 16) > 9 && (num % 16) < 16)
			{
				count += _putchar((num % 16) + 87);
			}
			else
			{
				count += _putchar((num % 16) + '0');
			}
		}
		else
		{
			return (-1);
		}
	}
	return (count);
}
