#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void spec_c(va_list ptr);
void spec_s(va_list str);
void print_specifier(char next, va_list ptr);
/**
 * struct print_sel - point to spc and fun_spc
 * @spc: char input
 * @func_spc: function pointer
 */
struct print_sel
{
	char spc;
	void (*func_spc)(va_list);
};

/**
 * print_sel - Typedef for print_sel
 */
typedef struct print_sel print_sel;

#endif
