#include "main.h"
/**
*print_sign - print the signs
*@n: is the int used inthe argument of the function
*Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
	return (1);
_putchar('+');
}
else if (n < 0)
{
	return (-1);
_putchar('-');
}
else
{
	return (0);
_putchar('0');
}
}
