#include "holberton.h"
/**
* print_diagonal - function that draws a diagonal line in the terminal.
* @n: number of spaces to be printed \
* Return: None.
*/
void print_diagonal(int n)
{
	int i, esp;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (esp = 0; esp < i; esp++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
