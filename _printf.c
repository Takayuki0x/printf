#include "main.h"

/**
 * handleString - handles the conversion specifiers for strings
*/

int handleString(char specifier1, char stringEnd, va_list params)
{
    int len = 0, iserror = 0, tempholder = 0;
    switch (specifier1)
    {
        case 'c':
            _putchar(va_arg(params, int));
            return(1);
        case 's':
            tempholder = sPrinter(va_arg(params, char *));
            break;
        case '%':
            _putchar(37);
        default:
            if (stringEnd == '\0')
            {
                iserror = 1;
            }
            else {
                _putchar(37);
            }
            break;
    }

    if (iserror == 1)
        return(-1);
}


/**
 * _printf - a replica of printf from stdio
 * Procudes an output according to a format and additional arguments
 * @format: the formatting string to use
 * Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
    int i = 0, number_printed = 0, tempholder = 0, iserror = 0;
    va_list params;
    va_start(params, format);

    if (!format || format == NULL)
    return (-1);

    while (format[i] != '\0')
    {
        switch (format[i])
        {
            case '%':
                tempholder = handleString(format[i + 1], format[i + 2], params);
                if(tempholder == -1)
                    iserror = 1;
                number_printed += tempholder - 1;
                i += 2;
            /**
                switch (format[i + 1])
                {
                    case 'c':
                        _putchar(va_arg(params, int));
                        i += 2;
                    break;
                    case 's':
                        tempholder = sPrinter(va_arg(params, char *));
                        i += 2;
                        number_printed += tempholder - 1;
                        break;
                    case '%':
                        _putchar(37);
                        i += 2;
                    break;
                    default:
                        if (format[i + 2] == '\0')
                            iserror = 1;
                        i++;
                    break;
                }
            */
            break;
            default:
                _putchar(format[i]);
                i++;
            break;
        }
        number_printed++;
    }
    va_end(params);
    if (iserror == 1)
    return (-1);
    return (number_printed);
}
