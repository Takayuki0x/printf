#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define UNUSED(x) (void)(x)

int getStringLength(char *string);
int _putchar(char character);

int _printf(const char *format, ...);

#endif