#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcode of own main function
 *
 * @argc: argument count
 * @argv: arg value
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, i;
	int (*a)(int, char **) = main;
	unsigned char *p;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = o i < x; i++)
	{
		opcode = *(unsigned char *)*a;
		printf("%.2x", opcode);

		if (i == x - 1)
			continue;
		print (" ");
		*a++
	}
	printf("\n");
	return (0);
}
