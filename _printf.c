#include "main.h"

/**
 * _printf - a replica of printf from stdio
 * Procudes an output according to a format and additional arguments
*/

int _printf(const char *format, ...)
{
CheckForFormatting(format);
}

/**
 * For testing
*/

int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
_printf("%s\n", "aaaa");
return (0);
}