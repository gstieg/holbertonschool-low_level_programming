#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print all argurments
 *
 * @argc: size
 *
 * @argv: arguments
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int a = 1, ab = 0, num = 0;

	while (a < argc)
	{
		while (argv[a][ab] != '\0')
		{
			if (!isdigit(argv[a][ab]))
			{
				printf("Error\n");
				return (1);
			}
			ab++;
		}
		num += atoi(argv[a]);
		a++;
	}
	printf("%d\n", num);
	return (0);
}
