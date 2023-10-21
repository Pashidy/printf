#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _printf - Custom printf function
 * @format: Format string containing directives
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
		format++;

		if (*format == 'c')
			{
			char c = va_arg(args, int);
			write(1, &c, 1);
			count++;
			}
		else if (*format == 's')
		}
		char *str = va_arg(args, char *);
		int i = 0;

		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			count++;
		}
	}
	else if (*format == '%')
		{
		write(1, "%", 1);
		count++;
		}
	{
        else
        	{
            		write(1, format, 1);
            		count++;
        	}

	format++;
		}

	va_end(args);

	return (count);
}
