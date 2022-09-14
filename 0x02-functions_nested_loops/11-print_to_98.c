#include "main.h"
#include <stdio.h>
/**
*print_to_98 - print natural no
*@n: the no to bigine
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
}
