#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define UNUSED(x) (void)(x)

typedef struct printingFormat pf;

int _putchar(char character);
void sPrinter(char *string);

int CheckForFormatting(const char *string);


int _printf(const char *format, ...);

#endif