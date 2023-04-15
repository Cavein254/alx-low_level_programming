#include <stdio.h>
/**
 * main - This program prints a  version of itself
 * @argc: Number of arguments passed
 * @argv: Array of arguments
 * Return: returns 0 for success
 */
int main(int argc, char *argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
