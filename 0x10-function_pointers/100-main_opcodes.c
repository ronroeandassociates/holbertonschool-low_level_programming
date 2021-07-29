#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 *
 * @argc: argument count
 * @argv: arg value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bits, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bits = atoi(argv[1]);

	if (bits < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < bits; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bits - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
