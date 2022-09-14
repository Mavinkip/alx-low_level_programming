#include "main.h"
/**
*_isalpha - print lower or upper
*@c: is the int that will use for the argument in the function
*Return: 0
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')
{
	return(1);
}
else
{
	return(0);
}
}
