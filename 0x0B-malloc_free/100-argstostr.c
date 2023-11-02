#include <stdlib.h>
#include "main.h"

/**
 * argstostr - It isn't the mountains ahead to climb
 * that wear you out; it's the pebble in your shoe
 * Function that concatenates all the arguments of your program.
 * @ac: input int grid to free.
 * @av: input int height of the grid.
 * Author - Nedu Robert
 * Return: Returns a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenatedString;
	int i = 0, j = 0, k = 0, size = 0;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		j = 0;
		i++;
	}

	concatenatedString = (char *)malloc((sizeof(char) * size) + ac + 1);

	if (concatenatedString == NULL)
		return (NULL);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			concatenatedString[k] = av[i][j];
			k++;
			j++;
		}

		concatenatedString[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	concatenatedString[k] = '\0';
	return (concatenatedString);
}
