#include "main.h"

/**
 * leet - Mozart composed his music not for the elite, but for everybody
 * Function that encodes a string into 1337.
 * @str: pointer to char str.
 * Author - Nedu Robert
 * Return: Returns encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{

	for (j = 0; j < 10; j++)
	{
		if (str[i] == a[j])
		{
			str[i] = b[j];
		}
	}
	}

	return (str);
}
