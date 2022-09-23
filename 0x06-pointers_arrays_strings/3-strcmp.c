#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @st1: first string to compare
 * @st2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *st1, char *st2)

{

	while (*st1 == *st2)

	{

		if (*st1 == 0)

		{

			return (0);

		}

		st1++;

		st2++;

	}

	return (*st1 - *st2);

}
