#include "main.h"
/**
*_strlen_recursion - length
*
*@s: string
*/
int _strlen_recursion(char *s)
{
int st = 1;
if (*s != '\0')
{

st=st + _strlen_recursion(s);
st++;
return (st);
}
return (0);
}
