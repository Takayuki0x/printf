#include "main.h"


int CheckForFormatting(char *string)
{
int i;

while (string[i] != '\0')
{
if(string[i] == "%")
{
_putchar("E");
}
else
{
_putchar("O");
}
_putchar("\n");
i++;
}
}
