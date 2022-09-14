#include "main.h"
/**
*print_last_digit - print the last digit
*@n: int is the argument in the function
*Return: 0
*/
int print_last_digit(int n)
{
int last = n % 10;
if (last < 0)
{
last *= -1;
_putchar(last + '0');
return (last);
}
}
