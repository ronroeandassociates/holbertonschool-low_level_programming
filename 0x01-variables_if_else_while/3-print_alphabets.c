#include <stdio.h>
/**
 * main - print alpha lower upeer
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

