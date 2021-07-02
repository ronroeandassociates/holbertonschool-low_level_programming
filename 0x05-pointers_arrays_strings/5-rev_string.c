#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

{
		int i = 0;
		int aux = 0;
		char ltemp;

		while (*(s + i) != '\0')
			i += 1;
		i -= 1;

		while (aux < i)
		{
			ltemp = s[i];
			s[i] = s[aux];
			s[aux] = ltemp;
			aux++;
			i--;
		}
}
