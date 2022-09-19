#include <stdio.h>
#include "main.h"
/**
 *puts_half(char *str) a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */
void puts_half(char *str)
{
	char *str = 0;

	while ((length_of_the_string - 1)/2 != '\0')
	{
		putchar(str);
		*str++;
	}
	putchar(10);
}
