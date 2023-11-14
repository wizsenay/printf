#include "main.h"
/**
 * _putchar - writes charactr c to the standard output
 * @c: char argumrnt to print
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (bufer(c));
}
/**
 * bufer - holds char in a buffer
 * @c: character c argument
 *
 * Return: 1
 */
int bufer(char c)
{
	static char buff[1024];
	static int a;

	if (c == -1 || a == 1024)
	{
		write(1, buff, a);
		i = 0;
	}

	if (c != -1)
		buff[a++] = c;
	return (1);
}
