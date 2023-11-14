#include "main.h"
/**
 * spec_int - prints integer
 * @num: number to print
 *
 */
void spec_int(va_list num)
{
	int n;
	n = va_arg(num, int);
	write(1, &n, 4);
}	
