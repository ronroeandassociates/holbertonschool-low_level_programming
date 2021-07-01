#include <stdio.h>
/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*/
int main(void)
{
	long int num = 612852475143, i = 2;

	while (i <= num)
	if ((num % i) == 0)
	{
	if (num != i)
	{
	num = num / i;
	}
	else
	printf("%ld\n", i);
	i++;
	return (0);
	}
}
