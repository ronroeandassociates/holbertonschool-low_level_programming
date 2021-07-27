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
	int index, bix;
	int (*address)(int, char **) = main
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
	for (index = 0; index < bix; index++
			{
			opcode = *(unsigned char *)address;
			printf("%.2x", opcode);
			if (index == bix - 1)
			continue;
			printf(" ");
			adress++;
			}
			printf("\n");
			return (0);
}
