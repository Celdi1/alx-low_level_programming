#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: Input
 * @accept: Input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
