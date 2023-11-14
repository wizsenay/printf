#include "main.h"
/**
 * spec_c - print an inpit character
 * @ptr: input pointer
 * Return: 1
 */

int spec_c(va_list ptr)
{
	int a;

	a = va_arg(ptr, int);
	_putchar(a);
	return (1);
}
