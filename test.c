// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(int character)
{
    return (write(1, &character, 1));
}


int sPrinter(char *string)
{
    int i = 0;
    
    
    if (string == NULL)
    {
        _putchar('(');
        _putchar('n');
        _putchar('u');
        _putchar('l');
        _putchar('l');
        _putchar(')');
        return (6);
    }
    
    while (string[i] != '\0')
    {
        if (string[i])
        {
            _putchar(string[i]);
        }
        i++;
    }

    
    return (i);
}

int handleString(char specifier1, char stringEnd, va_list params)
{
    int iserror = 0, tempholder = 0;
    
    switch (specifier1)
    {
        case 'c':
            _putchar(va_arg(params, int));
            return(1);
        case 's':
            tempholder = sPrinter(va_arg(params, char *));
            return(tempholder);
            break;
        case '%':
            _putchar(37);
            return(1);
            break;
        case '\0':
            iserror = 1;
            break;
        default:
            if (!stringEnd || stringEnd == '\0')
            {
                iserror = 1;
            }
            else {
                _putchar(37);
                return(1);
            }
            break;
    }

    if (iserror == 1)
        return(-1);

    return (0);
}

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
    {
        return (-1);
    }
    return (number_printed);
}

int main() {
    // Write C code here
    int len, len2;
    int t = 50;

    len = _printf("%");
    printf("len1: %d", len);
    //len2 = printf("%");

    //printf("Len 1: %d", len);

    return 0;
}