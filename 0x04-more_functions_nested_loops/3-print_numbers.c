#include <stdio.h>
#include "main.h"
/**
*print_numbers - print 0-9
*@n: is the int used inargument of the function
*Return: 0
*/
void print_numbers(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
	putchar(n);
	}
	putchar('\n');
}
