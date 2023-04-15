#include <stdio.h>
/**
 * main - this function prints the number of arguments in argc
 * @argc: This are the number of arguments passed
 * @argv: this are arrays
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	(void) argv;
		printf("%d\n", argc - 1);
		return (0);
}
