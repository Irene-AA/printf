#include<unistd.h>
/**
 * _putchar -writes a character to stdout
 * @a: character
 * Return: 1-success, -1 -error
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
