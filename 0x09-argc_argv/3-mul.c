#include <stdio.h>
#include <stdlib.h>

/**
 * main - miltiples two numbers
 *
 * @argc: size
 *
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
