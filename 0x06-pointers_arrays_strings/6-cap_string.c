#include "main.h"

/**
 * cap_string - Expect the best. Prepare for the worst.
 * Capitalize on what comes
 * Function that capitalizes all words of a string.
 * @str: pointer to char str.
 * Author - Nedu Robert
 * Return: Returns uppercase of all letters in a string.
 */
char *cap_string(char *str)
{
	int i, j, count;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.','!', '?',
	 '"', '(', ')', '{', '}'};
	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for(i = 0; i < count; i++)
	{
	   if(i == 0 && str[i] >= 'a' && str[i] <= 'z')
	   {
		str[i] = str[i] - 32;
	   }
	   for (j = 0; j < 13; j++)
	   {
		if(str[i] == separators[j])
		{
			if (str[i + 1] >= 'a' && str[i+1] <= 'z')
			{
				str[i+1] = str[i+1] - 32;
			}
		}
	   }
	}

	return (str);
}
