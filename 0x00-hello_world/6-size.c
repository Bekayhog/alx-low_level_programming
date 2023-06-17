#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", size(char));
	printf("Size of an int: %lu byte(s)\n", size(int));
	printf("Size of a long int: %lu byte(s)\n", size(long int));
	printf("Size of a long long int: %lu byte(s)\n", size(long long int));
	printf("Size of a float: %lu byte(s)\n", size(float));
	return (0);
}
