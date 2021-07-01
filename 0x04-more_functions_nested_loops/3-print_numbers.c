#include "holberton.h"
/**
* print_numbers - program that writes the numbers from 0-9
*
* Return: None.
*/
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	_putchar(c);
	_putchar('\n');
}
