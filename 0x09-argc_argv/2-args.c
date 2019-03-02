#include <stdio.h>

/**
 * main - main
 *
 * @argc: size
 *
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (argc > a)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
