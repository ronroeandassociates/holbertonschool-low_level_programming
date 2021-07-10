#include "holberton.h"
/**
 * _strncpy - copie a string
 * @destination:char
 *  @source:char
 * @n:int
 * Return:char
 */
char *_strncpy(char *destination, char *source, int n)
{
	int i;

	i = 0;
	while (i < n && *(source + i))
	{
	*(destination + i) = *(source + i);
		i++;
	}
	while (i < n)
	{
	*(destination + i) = '\0';
		i++;
	}
	return (destination);
}
