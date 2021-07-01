#include <stdio.h>
/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: Always 0.
*/
int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (n != 1)
	{
		if ((n % i) == 0)
		{
			n = n / i;

		}
		if (n == 1)
		{
			printf("%ld\n", i);
		}
		i++;
	}

return (0);
}
