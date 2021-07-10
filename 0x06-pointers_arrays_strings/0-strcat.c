#include "holberton.h"

/**
* _strcat - concat 2 string
* @destination:char
* @source:char
* Return:char
*/
char *_strcat(char *destination, char *source)
{
	char *s = destination;

	while (*destination != '\0')
	{
		destination++;
	}
	while (*source != '\0')
	{
	*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';
	return (s);
}
