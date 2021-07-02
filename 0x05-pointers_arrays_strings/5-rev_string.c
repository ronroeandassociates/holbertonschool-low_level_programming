#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	for (i = 0; s[i] != 00; i++)
	i = i --;
	for (j = 0; j <= i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
	}
}
