#include "main.h"
/**
*jack_bauer - prints time
*Return: 0
*/
void jack_bauer(void)
{
int h;
int m;

for (h=0; h <= 23; h++)
{
_putchar(h);
}
_putchar(':');
for (m=0; m <= 59; m++)
{
_putchar(m);
}
_putchar('\n');
}
