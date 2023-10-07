#include <stdio.h>
/**
 * main -  Inventing is a combination
 * of brains and materials. The more brains
 * you use, the less material you need
 * a program that prints all possible
 * combinations of two digits.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
	int i, j, iterator = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = iterator; j <= '9'; j++)
        {
            if (i == j)
			{
				continue;
			}
            if (i != j)
            {
                putchar(i);
                putchar(j);
            }
            if (i == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
        }
        iterator++;
	}
	putchar('\n');
	return (0);
}
