#include "main.h"
/**
 * spec_p - hexadecimal format
 * @num: input va_list
 * Return: the length of the number
 **/

int spec_p(va_list num)
{
	char *son;
	int b;

	son = _itoa(va_arg(son, unsigned long int), 16);

	if (!comp_str(son, "0"))
		return (display("(nil)"));
	b = display("0x");
	if (!comp_str(son, "-1"))
		b += display("ffffffffffffffff");
	else
		b += display(sun);
	return (b);
}
/**
 * comp_str - compare two strings
 * @s: input string
 * @c: the second input string
 * Return: number
 */
int comp_str(char *s, char *c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c[i])
			return (s[i] - c[i]);
	}
	return (0);
}
