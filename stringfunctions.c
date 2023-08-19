#include "main.h"

/**
 * _putchar - writes a character to standard output buffer
 * @character: character to write, passed as an int to avoid casting errors
 * Return: 1 or -1
*/

int _putchar(int character)
{
return(write(1, &character, 1));
}

/**
 * sPrinter - prints the entire string passed as parameter exactly as is
 * often used in conjunction with the %s format in _printf
 * @string: string to print
 * Return: Nothing
*/

void sPrinter(const char *string)
{
int i = 0;

while (string[i] != '\0')
{
_putchar(string[i]);
i++;
}
}
