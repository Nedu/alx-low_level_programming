#include "main.h"

/**
 * string_toupper - Always look up
 * Function that changes all lowercase letters of a string to uppercase.
 * @str: pointer to char str.
 * Author - Nedu Robert
 * Return: Returns uppercase of all letters in a string.
 */
char *string_toupper(char *str)
{
	int i, count;
	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for(i = 0; i < count; i++)
	{
	   if(str[i] >= 'a' && str[i] <= 'z')
	   {
		str[i] = str[i] - 32;
	   }
	}

	return (str);
}
