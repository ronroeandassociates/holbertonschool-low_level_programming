#include <stdio.h>
/**
 *main - Prints all the numbers of base 16 in lowercase.
 *
 *Return: Always 0.
 */
int main(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	putchar((i % 10) + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	putchar(alpha);

	putchar('\n');
	return (0);
}
