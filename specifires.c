#include "main.h"
/**
 * format_handle - controls formats
 * @format_s: string format
 * @args_list: list of arguments
 *
 * Return: size of arguments
 */
int format_handle(const char *format_s, va_list args_list)
{
	int total_size, i, size;

	total_size = 0;
	for (i = 0; format_s[i] != 0;; i++)
	{
		if (format_s[i] == '%')
		{
			size = print_specifier(format_s, args_list, &i);
			if (size == -1)
				return (-1);

			total_size += size;
			continue;
		}
		_putchar(format_s[i]);
		total_size++;
	}
	return (total_size);
}
/**
 * print_specifier - select specifiers
 * @next: input specifier
 * @ptr: input pointer
 * @index: iterator
 *
 * Return: length of elements printed
 */
int print_specifier(const char *next, va_list ptr, int *index)
{
	int size, j, n_formats;
	print_sel fuPt[] = {
			{'c', spec_c}, {'s', spec_s},
			{'d', spec_int}, {'i', spec_int},
			{'b', spec_b}, {'u', spec_u},
			{'o', spec_o}, {'x', spec_hex_l},
			{'X', spec_hex_u}, {'p', spec_p},
			{'r', spec_rev_s}, {'R', spec_rot}
			};
	*index = *index + 1;

	if (next[*index] == '\0')
		return (-1);
	if (next[*index] == '%')
	{
		_putchar('%');
		return (1);
	}

	n_formats = sizeof(fuPt) / sizeof(fuPt[0]);
	for (size = j = 0; j < n_formats; j++)
	{
		if (next[*index] == fuPt[j].spc)
		{
			size = fuPt[j].func_spc[ptr];
			return (size);
		}
	}

	_putchar('%'), _putchar(next[*index]);

	return (2);

}
