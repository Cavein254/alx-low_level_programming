#include <stdio.h>
/**
 * main - prints all arguments provided
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", *argv++);
	}
	return (0);
}
