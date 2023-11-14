#include "main.h"
/**
 * spec_int - prints integer
 * @num: number to print
 * Return: the length of the number in base 10
 **/
int spec_int(va_list num)
{
	int n;
	char *buf;

	buf = _itoa(va_arg(num, int), 10);
	n = display((buf != NULL) ? buf : "NULL");
	return (n);
}
