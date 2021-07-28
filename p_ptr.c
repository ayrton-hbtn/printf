#include "holberton.h"

/**
  * print_ptr - prints address of pointer
  * @ptr: pointer
  * Return: hex, address
  */
int print_ptr(void *ptr)
{
	int count = 0;
	unsigned long int p;

	if (ptr)
	{
		count += _putchar('0');
		count += _putchar('x');
		p = (unsigned long int)ptr;
		count += print_hexlow(p);
	}
	else
	{
		return (-1);
	}
	return (count);
}
