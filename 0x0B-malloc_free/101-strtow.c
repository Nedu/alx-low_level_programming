#include <stdlib.h>
#include "main.h"

/**
 * strtow -I will show you how great I am
 * Function that splits a string into words.
 * @str: input char str to split.
 * Author - Nedu Robert
 * Return: Returns a pointer to an array of strings (words)
 * or NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **res;
	int i = 0;

	if (str == NULL || str == "")
		return (NULL);
	
	res = (char **) malloc(sizeof(char *) * str);

	if (res == NULL)
		return (NULL);
	
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			
		}
	}

	return (res);
}
