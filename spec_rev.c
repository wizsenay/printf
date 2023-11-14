#include "main.h"
/**
 * spec_rev_s - revers string
 * @num: input va_lis
 * Return: the length of the number
 */

int spec_rev_s(va_list num)
{
	const char *son;
	int b, i;

	son = va_arg(num, const char *);
	b = str_len(son);
	for (i = b - 1; i >= 0; i--)
		_putchar(son[i]);
	return (b);
}
