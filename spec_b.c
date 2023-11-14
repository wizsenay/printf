#include "main.h"
/**
 * spec_b - convert a decimal and print it in form of binary
 * @des: va_list
 * Return: the length of the number
 */

int spec_b(va_list des)
{
	char *bin;
	int b;

	bin = _itoa(va_arg(des, unsigned int), 2);
	b = display(bin);
	return (b);
}
