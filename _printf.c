#include "main.h"


char *tostring(int num);

/**
 * _printf - function to print in format
 * @format: format for object to be printed in
 *
 * Return: int -1 for error, 0 for success
 */

int _printf(const char *format, ...)
{
	int noc = 0;
	va_list list;
	char *str;

	if (format == NULL)
		return (-1);
	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			noc++;
		}
		else if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			else if (*format == 'c')
			{
				char c = va_arg(list, int);

				write(1, &c, 1);
				noc++;
			}
			else if (*format == 's')
			{
				str = va_arg(list, char *);
				write(1, str, strlen(str));
				noc += strlen(str);
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				noc++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(list, int);

				char *buffer = tostring(num);

				write(1, buffer, strlen(buffer));
				noc += strlen(buffer);
			}
		}
		format++;
	}
	va_end(list);
	return (noc);
}

