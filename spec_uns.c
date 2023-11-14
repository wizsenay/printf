#include "main.h"
/**
 * spec_u - prints a unsigned intiger value
 * @num: input va_list
 * Return: the lrmgth of the input number
 */

int spec_u(va_list num)
{
	char *c;
	int b;

	c = _itoa(va_arg(num, unsigned int), 10);
	b = display((c != NULL) ? c : "NULL");
	return (b);
}
