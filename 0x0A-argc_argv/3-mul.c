#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program add two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 for success and 1 for failure
 */
int main(int argc, char **argv)
{
	if (argc <= 3)
	{
		printf("Error \n");
		return (1);
	}

	printf("%d \n", atoi(argv[1]) + atoi(argv[2]));
	return (0);

}
