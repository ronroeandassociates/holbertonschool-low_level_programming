#include "holberton.h"
/**
 * print_alphabet - function to print the alphabet
 * Return:0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	_putchar(a);
	a++;
	_putchar('\n');
}
