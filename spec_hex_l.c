#include "main.h"
/**
 * spec_hex_l - print a given input number in form of hexadecimal format
 * @hex: input pointer
 * Return: the length of the number
 */

int spec_hex_l(va_list hex)
{
	char *low;
	int b;

	low = _itoa(va_arg(hex, unsigned int), 16);
	b = display((low != NULL) ? low : "NULL");
	return (b);
}
