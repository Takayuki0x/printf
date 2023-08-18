#include "main.h"

/**
 * _putchar - writes a character to standard output buffer
 * @character: character to write
 * Return: 1 or -1
*/

int _putchar(char character)
{
return(write(1, &character, 1));
}


/**
 * getStringLength - Gets the length of a string
 * @string: String to get length of
 * Return: 0 if string is NULL, Lenght of string otherwise
*/

int getStringLength(char *string)
{
int i = 0;

if (!string)
return (0);

while (string[i] != '\0')
{
i++;
}

return (i);
}


