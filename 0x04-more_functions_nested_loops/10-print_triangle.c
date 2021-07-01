#include "holberton.h"
/**
* print_triangle - function that prints a triangle.
* @size: size number of square
* Return: None.
*/
void print_triangle(int size)
{
	int i, s, c;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (s = 1; s < (size - i); s++)
			_putchar(' ');
		for (c = s; c <= size; c++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
