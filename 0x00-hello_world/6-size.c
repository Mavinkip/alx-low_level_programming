#include <stdio.h>

/**
 * main - print the string in the printf function
 *
 * Description: using the main function 
 * this program prints with proper grammar, but the outcome is a piece of art, 
 * Return: 0 
 */
int main(void)
{
	char c;
	int i;
	long ll;
	long long lll;
	float f;
	printf("size of char: %ld byte(s)\n", sizeof(c));
	printf("size of int: %ld byte(s)\n", sizeof(i));
	printf("size of long : %ld byte(s)\n", sizeof(ll));
	printf("size of long long int: %ld byte(s)\n", sizeof(lll));
	printf("size of float int: %ld byte(s)\n", sizeof(f)); 
	return (0);
}
