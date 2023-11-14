#include "main.h"
/**
 * spec_hex_u - output in hexadecimal format
 * @uup: bese 10 number
 * Return: the length of the number
 */

int spec_hex_u(va_list uup)
{
	char *son;
	int b;

	son = _itoa(va_arg(uup, unsigned int), 16);
	son = upper_string(son);

	b = display((son != NULL) ? son : "NULL");
	return (b);
}

/**
 * lower_case - check if the character are in lowercase
 * @s: input character
 * Return: (0) or (1)
 **/
int lower_case(char s)
{
	return (s >= 'a' && c <= 'z');
}
/**
 * upper_string - change to upper case
 * @d: string input
 * Return: uppercase
 */
char *upper_string(char *d)
{
	int i;

	for (i = 0; d[i] != '\0'; i++)
	{
		if (lower_case(d[i]))
		{
			s[i] = s[i] - 32;
		}
	}
	return (d);
}
