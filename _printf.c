#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: input string
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int len;

	if (format == NULL)
		return (-1);
	len = str_len(format);
	if (len <= 0)
		return (0);

	va_start(ptr, format);
	len = format_handle(format, ptr);

	_putchar(-1);
	va_end(ptr);

	return (len);
}
