#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - math
 *
 * @argc: number
 *
 * @argv: command line
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int answer;
	char a = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((a != '+' &&
	     a != '-' &&
	     a != '*' &&
	     a != '/' &&
	     a != '%') ||
	    argv [2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (a == '/' ||
				   a == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	answer = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", answer);
	return (0);
}
