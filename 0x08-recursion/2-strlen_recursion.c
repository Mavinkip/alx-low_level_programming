#include "main.h"
/**
*_strlen_recursion - length
*
*@s: string
*/
int _strlen_recursion(char *s)
{
if (s == '\0')
{
return (0);
}
_strlen_recursion(s);
-putchar(s);
}
