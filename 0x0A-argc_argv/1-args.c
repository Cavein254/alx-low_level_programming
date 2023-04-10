#include <stdio.h>
/**
 * main - this function prints the number of arguments in argc
 * @argc: This are the number of arguments passed
 * @argv: this are arrays
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
