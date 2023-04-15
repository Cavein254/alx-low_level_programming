#include <stdio.h>
/**
 * main - This program prints a  version of itself
 * @argc: Number of arguments passed
 * @argv: Array of arguments
 * Return: returns 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
