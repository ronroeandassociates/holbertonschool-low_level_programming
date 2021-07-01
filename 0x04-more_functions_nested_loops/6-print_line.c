#include "holberton.h"
/**
* print_line - function that draws a straighr line in the terminal.
* @n: number of spaces to be printed _
* Return: None.
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	for (i = 0; i < n; i++)
	_putchar('_');
	_putchar('\n');
}
