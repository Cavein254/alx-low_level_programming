#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function multiplies two numbers
 * @argc: This are the number of arguments passed
 * @argv: this are arrays
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
