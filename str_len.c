#include "main.h"
/**
 * str_len - length of a string
 * @s: string argument
 *
 * Return: string length
 */
int str_len(const char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);
}
/**
 * display - diplay char
 * @s: string argument
 *
 * Return: length of the string
 */
int display(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; ++y)
		_putchar(s[y]);

	return (y);
}
