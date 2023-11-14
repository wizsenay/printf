#include "main.h"
/**
 * spec_s - print string
 * @str: input pointer
 */

void spec_s(va_list str)
{
	char *c;
	int b, stcoun = 0;

	c = va_arg(str, char *);
	while (c[stcoun])
		stcoun++;
	for (b = 0; b < stcoun; b++)
		write(1, &c[b], 1);
}
