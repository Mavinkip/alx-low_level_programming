#include "main.h"
/**
*jack_bauer - prints time
*Return: 0
*/
void jack_bauer(void)
{
int h;
int m;
int hr;
int mr;

for (h=0; h <= 23; h++)
{
for (m=0; m <= 59; m++)
hr = h % 10;
mr = m % 10;
_putchar(h / 10 '0');
_putchar(hr + '0');
_putchar(':');
_putchar(m / 10 '0');
_putchar(mr + '0');
_putchar('\n');
}
