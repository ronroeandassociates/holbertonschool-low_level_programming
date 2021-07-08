#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest:char dest
 * @src: char src
 * @n:length int
 * Return:char
 */
char *_strncat(char *destination, char *source, int n)
{
	int i, j;

	for (i = 0; destination[i] != '\0'; i++)
	{
	continue;
	}
	for (j = 0; source[j] != '\0' && j < n; j++)
	{
	destination[i + j] = source[j];
	}
	destination[i + j] = '\0';
	return (destination);
}
