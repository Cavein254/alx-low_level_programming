#include <stdio.h>
/**
 * main - This program prints the number of argumets passed
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		printf("%d \n", argc);
		return (0);
	}
	printf("%d \n", argc - 1);
	return (0);
}
