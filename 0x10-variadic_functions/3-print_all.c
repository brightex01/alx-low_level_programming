#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: format to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator = "";
	int i = 0, j;

	filter filt[] = {
		{'c', print_c},
		{'i', print_d},
		{'f', print_f},
		{'s', print_s}
	};
	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == filt[j].fmt)
			{
				_putchar("%s", separator);
				filt[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	_putchar("\n");
	va_end(list);
}
