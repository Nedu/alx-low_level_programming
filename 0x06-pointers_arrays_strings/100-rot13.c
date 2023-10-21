#include "main.h"

/**
 * rot13 - rot13
 * Function that encodes a string using rot13.
 * @str: pointer to char str.
 * Author - Nedu Robert
 * Return: Returns encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{

	for (j = 0; a[j] != '\0'; j++)
	{
		if (str[i] == a[j])
		{
			str[i] = b[j];
			break;
		}
	}
	}

	return (str);
}
