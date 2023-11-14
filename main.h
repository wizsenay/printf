#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/* printf.c */
int _printf(const char *format, ...);

/* specifries.c */

int format_handle(const char *, va_list);
int print_specifier(const char *, va_list, int *);

/* str_len.c */
int str_len(const char *s);
int display(char *s);

/* _itoa.c */
char *_itoa(long int, int);

/* _putchar.c */
int _putchar(char c);
int bufer(char c);

/* percent handler pointers */
int spec_c(va_list);
int spec_int(va_list);
int spec_s(va_list);
int spec_rev_s(va_list);
int spec_p(va_list);
int spec_b(va_list);
int spec_hex_l(va_list);
int spec_hex_u(va_list);
int spec_rot(va_list);
int spec_u(va_list);
int spec_o(va_list);
/**
 * struct print_sel - point to spc and fun_spc
 * @spc: char input
 * @func_spc: function pointer
 */
struct print_sel
{
	char spc;
	int (*func_spc)(va_list);
};

/**
 * print_sel - Typedef for print_sel
 */
typedef struct print_sel print_sel;

#endif
