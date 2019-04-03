#include "holberton.h"

/**
 * main - copy the file
 *
 * @argc: arguments
 *
 * @argv: pointer for strings
 */
int main(int argc, char *argv[])
{
	int check, ab1, ab2;
	char call[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ab1 = open(argv[1], O_RDONLY);
	if (ab1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ab2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ab2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
		exit(99);
	}
	while ((check = read(ab1, call, 1024)) > 0)
	{
		if (check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		check = write(ab2, call, check);
		if (check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't wite to %s\n", argv[2]);
			exit(99);
		}
	}
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(ab1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ab %d\n", ab1);
		exit(100);
	}
	if (close(ab2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't closeab %d\n", ab2);
		exit(100);
	}
	return (0);
}
