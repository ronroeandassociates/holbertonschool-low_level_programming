#include "holberton.h"
/**
* _isdigit - is a program that checks for a digit 0 trough 9
* @c: is check
* Return: 1 if c is a digit or 0 is otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
