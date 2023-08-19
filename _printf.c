#include "main.h"

/**
 * _printf - a replica of printf from stdio
 * Procudes an output according to a format and additional arguments
 * @format: the formatting string to use
 * Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
int i = 0, number_printed = 0;
va_list params;

va_start(params, format);

while (format[i] != '\0')
{
switch (format[i])
{
case '%':
switch (format[i + 1])
{
case 'c':
_putchar(va_arg(params, int));
i += 2;
break;
case 's':
sPrinter(va_arg(params, char *));
i += 2;
break;
case '%':
_putchar(37);
i += 2;
break;
}
break;

default:
_putchar(format[i]);
i++;
break;
}
number_printed++;
}
return (number_printed);
}
