#include "main.h"
/**
 * rot_print - encodes a given string.
 * @str: input string
 * Return: encode string
 */

int rot_print(char *str)
{
	int i, j;
	char *s1, *s2;

	s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				_putchar(s2[j]);
				break;
			}
		}
		if (!s1[j])
			_putchar(str[i]);
	}
	return (i);
}
/**
 * spec_rot - print the 13'ed string
 * @num: input va_list
 * Return:the lrngth of the string
 **/
int spec_rot(va_list num)
{
	char *s;
	int b;

	s = va_arg(num, char *);
	b = rot_print((s != NULL) ? s : "(ahyy)");
	return (b);
}
