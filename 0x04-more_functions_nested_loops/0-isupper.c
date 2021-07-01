#include "holberton.h"
/**
* _isupper - program that that determines if a character is uppercase`
* @c: check
* Return: 1 if c is upper or 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
