#include "holberton.h"
/**
  * print_hex - print hex format of decimal num
  * @num: int
  *
  * Return: number of bytes
  */
int print_hex(unsigned int num)
{
	int count = 0;

	if (num)
	{
		if (num >= 1)
		{
			count += print_hex(num / 16);
			if ((num % 16) > 9 && (num % 16) < 16)
			{
				count += _putchar((num % 16) + 55);
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
