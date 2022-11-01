#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int x = 0;
	int n = 0;

	while (s[n] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[n] == accept[x])
			{
				i++;
				break;
			}
			x++;
		}
		if (s[n] != accept[x])
			break;
		x = 0;
		n++;
	}
	return (i);
}
