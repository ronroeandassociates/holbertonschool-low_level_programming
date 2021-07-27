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
	int i, x;

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

	for (i = 0; i < (x - 1); i++)
	{
		if (x != 0)
		pirintf("%02hhx ", ((char *)main)[i]);
	}
	printf("%hhx\n", ((char *)main)[i]);
	return (0);
}
