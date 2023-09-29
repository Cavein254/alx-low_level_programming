#include <stdio.h>
/**
 * main - This program prints its name
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s \n", *argv);
	return (0);
}
