#include <stdio.h>

/**
 * main - print single digit numbers of base 10 followed by new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}

