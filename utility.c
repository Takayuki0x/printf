#include "main.h"

/**
 * CheckForFormatting - Checks the format string and returns an array of
 * types that were used in it. For example having your format string as
 * "print %c%s" will return the array ['c', 's']
 * @string: format string to check
 * Return: an array of formatting parameters
*/

int CheckForFormatting(const char *string)
{
int i = 0, j = 0, k = 0;
char *arrayOfFormats;
while(string[i] != '\0')
{
if(string[i] == 37)
{
j++;
}
i++;
}
i = 0;
printf("How many detected: %d\n", j);
arrayOfFormats = malloc(j * sizeof(char));
while(string[i] != '\0')
{
if(string[i] == 37)
{
switch (string[i + 1])
{
case 'c':
arrayOfFormats[k] = 'c';
break;
case 's':
arrayOfFormats[k] = 's';
break;
}
k++;
i++;
}
i++;
}
if (arrayOfFormats)
return(arrayOfFormats);

return(0);
}

