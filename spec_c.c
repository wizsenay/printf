#include "main.h"
/**
 * spec_c - print an inpit character
 * @ptr: input pointer
 */

void spec_c(va_list ptr)
{
	int a;

	a = va_arg(ptr, int);
	write(1, &a, 4);
}
