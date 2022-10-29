#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: Returns
 */
char *cap_string(char *s)
{
	int count = 0;

	while (str[count])
	{
		while (!(str[count] >= 'a' && str[count] <= 'z'))
			count++;

		if (str[count - 1] == ' ' ||
		    str[count - 1] == '\t' ||
		    str[count - 1] == '\n' ||
		    str[count - 1] == ',' ||
		    str[count - 1] == ';' ||
		    str[count - 1] == '.' ||
		    str[count - 1] == '!' ||
		    str[count - 1] == '?' ||
		    str[count - 1] == '"' ||
		    str[count - 1] == '(' ||
		    str[count - 1] == ')' ||
		    str[count - 1] == '{' ||
		    str[count - 1] == '}' ||
		    count == 0)
			str[count] -= 32;

		count++;
	}

	return (str);
}
