#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: input
 *
 * @argv: input 2
 *
 * Return: 0
 */
int main(int argc, char *argv)
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}
