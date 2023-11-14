#include "main.h"
/**
 * _itoa - a funtion that converts an integer into ASCII code
 * @n: number
 * @b: base
 *
 * Return: Charatcer
 */
char *_itoa(long int n, int b)
{
	static char *a = "0123456789abcdef";
	static char buff[50];
	char s = 0;
	char *p;
	unsigned long i = n;

	if (n < 0)
	{
		i = -n;
		s = '-';
	}
	p = &buff[49];
	*p = '\0';

	do {
		*--p = a[i % b];
		i /= b;
	} while (i != 0);

	if (s)
		*--p = s;
	return (p);
}
