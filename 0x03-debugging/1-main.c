#include <stdio.h>
#include "main.h"
/**
* main -causes an infinite loop
* Return: 0
*/
int main(void)
{
int i;

printf("Infinite loop incoming :(\n", i);
i = 0;
/*
*while (i < 10)
*{
*_putchar(i);
*}
*/

printf("Infinite loop avoided! \\o/\n", i);
return (0);
}
