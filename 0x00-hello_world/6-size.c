#include <stdio.h>

/**
 * main - print the string in the printf function
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long ll;
	long long lll;
	float f;
	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(ll));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lll));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}

