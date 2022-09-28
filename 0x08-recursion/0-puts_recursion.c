#include "main.h"
/**
*_puts_recursion(char *s) - prints a string
*@s: is the string
*Return:0
*/
void _puts_recursion(char *s)
{
	if (s[0] = '\0')
	{
		_putchar("\n");
		return (0);
	}
	_putchar(s[0]);
	s++;
_puts_recursion(s);
}
