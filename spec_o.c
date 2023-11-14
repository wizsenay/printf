#include "main.h"
/**
 * spec_o - output unsigned octal
 * @oct: input number
 * Return: length of the input number
 */

int spec_o(va_list oct)
{
	char *des;
	int b;

	des = _itoa(va_arg(oct, unsigned int), 8);
	b = display((des != NULL) ? des : "NULL");
	return (b);
}
