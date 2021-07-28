#include "holberton.h"
/**
  * print_hexlow - print the hexadecimal of the number in lowercase
  * @num: int
  *
  * Return: number of bytes
  */
int print_hexlow(unsigned long int num)
{
	int count = 0;

	if (num)
	{
		if (num >= 1)
		{
			count += print_hexlow(num / 16);
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
