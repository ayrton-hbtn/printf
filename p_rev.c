/**
* _strlen - calculates the length of a string
* @s: pointer to string
* Return: int, strlen
*/
int _strlen(char *c)
{
	int i;

	for (i = 0 ; *(c + i) != '\0' ; i++)
	{
		continue;
	}
	return (i);
}

#include "holberton.h"
/**
* print_rev - reverses a string and prints it
* @c: pointer to string
* Return: int, strlen
*/
int print_rev(char *c)
{
	int i;
	int j;
	int count = 0;

	if (c)
	{
		j = _strlen(c);
		for (i = j ; *(c + i - 1) != '\0' ; i--)
		{
			count += _putchar(*(c + i - 1));
		}
		_putchar('\n');
	}
	return (count);
}
