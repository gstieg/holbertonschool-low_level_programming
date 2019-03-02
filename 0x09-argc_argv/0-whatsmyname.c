#include <stdio.h>

/**
 * main - prints programs name
 *
 * @argc: input 1
 *
 * @argv: input 2
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
