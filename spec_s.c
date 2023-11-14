#include "main.h"
/**
 * spec_s - print string
 * @str: input pointer
 * Return: the lrngth of string
 */

int spec_s(va_list str)
{
	char *c;
	int b;

	c = va_arg(str, char *);
	b = display((c != NULL) ? c : "(null)");
	return (b);
}
