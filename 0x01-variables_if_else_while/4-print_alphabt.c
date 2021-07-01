#include <stdio.h>
/**
 * main - print alpha lower except q and e
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char h;

	h = 'a';
	while (h <= 'z')
	{
		if ((h != 'q') && (h != 'e'))
		{
		putchar(h);
		++h;
		}
		else
		++h;
	}
	putchar('\n');
	return (0);
}
