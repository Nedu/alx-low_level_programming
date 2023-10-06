#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 * prints the size of various types on the computer it is compiled and run on.
 * Author - Nedu Robert
 *
 * Return: Returns 0
 */
int main(void)
{
    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
    printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
    return (0);
}