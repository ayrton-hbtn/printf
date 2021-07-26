#include "holberton.h"
/**
* print_rot13 - formats text to rot13
* @c: pointer to string
* Return: int, strlen
*/
int print_rot13(char *c)
{
	int i;
	int count = 0;
	int j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm ";

	if (c)
	{
		for (i = 0 ; c[i] != '\0' ; i++)
		{
			for (j = 0 ; s1[j] != '\0' ; j++)
			{
				if (c[i] == s1[j])
				{
					count += _putchar(s2[j]);
					break;
				}
			}
		}
	}
	return (count);
}
