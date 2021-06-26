#include <stdio.h>
/**
 * main - print alpha lower upeer
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char alphaa[27] = "abc...xyz";
	char alphaB[27] = "ABC...XYZ";
	int i = 0;
	char ch;

	for (i = 0; i < 26; i++)
	{
	ch = alphaa[i];
	putchar(ch);
	}
	for (i = 0; i < 26; i++)
	{
	ch = alphaB[i];
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

