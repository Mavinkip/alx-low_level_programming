#include "main.h"
/**
*_print_rev_recursion - reverse a string
*
*@s: is the string
*Return 0
*/
void _print_rev_recursion(char *s)
{
if (s[0] = '\0')
{
_putchar(10);
return;
{
_putchar(s[0];
s++;
_print_rev_recursion(s);
}
