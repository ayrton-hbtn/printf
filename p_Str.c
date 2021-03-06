#include "holberton.h"
/**
  * print_Str - prints string with custom conversion specifier
  * @c: pointer to string
  * Description - special and non printable characters are replaced by their
  * ASCII code in hex
  * Return: int, strlen
  */
int print_Str(char *c)
{
	int i, count = 0;

	for (i = 0; c[i]; i++)
	{
		if ((c[i] > 0 && c[i] < 32) || (c[i] >= 127))
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (c[i] <= 16)
				count += _putchar('0');
			count += print_hex(c[i]);
		}
		else
		{
			count += _putchar(c[i]);
		}
	}
	return (count);
}
