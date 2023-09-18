#include "main.h"
/**
 * _printf - function that print integer if %d or %i found
 *
 * @format : the number to be printed
 *
 * Return: integer
 */
int _printf(const char *format, ...)
{
	int i = 0, j, flag = 1;
	va_list ptr;

	if (!format)
		return (-1);
	if (*format == '\0')
		return (-1);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			handleBuffer(1, &format[i]);
		else
		{
			j = 0, flag = 1, ++i;
			while (format[i] == ' ')
				++i;
			if (format[i] == '\0')
				return (handleBuffer(-1, "") ? handleBuffer(-1, "") : -1);
			if (format[i] == '%')
			{
				printPercentage();
				flag = 0;
			}
			for (; j < 10; ++j)
			{
				if (format[i] == specifiers[j].sp && flag)
					specifiers[j].funcPtr(ptr), flag = 0;
			}
			if (flag)
				handleBuffer(2, &format[i - 1]);
		}
		++i;
	}
	va_end(ptr);
	return (handleBuffer(-1, ""));
}
