#include "holberton.h"
#include <stddef.h>
/**
  * print_str - print a string of char
  * @c: pointer to string
  * Return: int, print count
  */
int print_str(char *c)
{
	int i = 0, count = 0;

	if (c == NULL)
	{
		c = "(null)";
	}
	if (c)
	{
		for (; c[i] != '\0'; i++)
		{
			count += _putchar(c[i]);
		}
	}
	return (count);
}
