#include <stdio.h>
/**
 * main - print alpha lower except q and e
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char alphaa[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	char ch;

	for (i = 0; i < 26; i++)
	{
	ch = alphaa[i];
	putchar(ch);
	}
	if (ch == 'q' || ch == 'e')
	i++;
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

