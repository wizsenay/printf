#include "main.h"
/**
 * print_specifier - select specifiers
 * @next: input specifier
 * @ptr: input pointer
 */
void print_specifier(char next, va_list ptr)
{
	print_sel fuPt[] = {
			{'c', spec_c}, {'s', spec_s}
			};
	int i = 0;

	while (fuPt[i].spc != next)
		i++;
	fuPt[i].func_spc(ptr);
}
