#include <stdio.h>
#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: input string
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int i, j, k = 0;

	j = 0;
	va_start(ptr, format);
	while (format[j])
		j++;
	for (i = 0; i < j; i++)
	{
		if (format[i] == '%')
		{
			print_specifier(format[i + 1], ptr);
			k++;
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			k++;
		}
	}
	va_end(ptr);
	return (k - 1);
}
