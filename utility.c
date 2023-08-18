#include "main.h"


int CheckForFormatting(const char *string)
{
int i;
char *str;

stringcopy(str, string);

while (str[i] != '\0')
{
if(str[i] == "%")
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
return (0);
}
