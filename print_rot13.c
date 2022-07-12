#include "main.h"
#include <stdlib.h>

/**
 * print_R - prints a string in rot13
 * @R: string to print
 * Return: number of chars printed
 */
int print_R(va_list R)
{
	char *str;
	unsigned int a, b;
	int count = 0;
	char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (a = 0; str[a]; a++)
	{
		for (b = 0; inp[b]; b++)
		{
			if (inp[b] == str[a])
			{
				_putchar(out[b]);
				count++;
				break;
			}
		}
		if (!inp[b])
		{
			_putchar(str[a]);
			count++;
		}
	}
	return (count);
}
