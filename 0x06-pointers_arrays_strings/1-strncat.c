#include "main.h"
/**
*_strncat - simmilar to _strcat
*@dest: string to be appendd upon
*@src:string to be completed at nd of dest
*@n:integer parameter to compare index to
*Return:return a new concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
}
