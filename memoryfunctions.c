#include "main.h"

char *stringcopy(char *destination, char *source)
{
int length = 0, i;

while (source [length] != '\0')
length ++;

for (i = 0; i < length; i++)
{
    destination[i] = source[i];
}

destination[i] = '\0';
return (destination);
}