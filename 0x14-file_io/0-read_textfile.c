#include "holberton.h"

/**
 * read_textfile - read the text files
 *
 * @filename: input for filename
 *
 * @letters: input for letters
 *
 * Return: 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int ab;
	char *call;

	if (filename == NULL)
		return (0);
	ab = open(filename, O_RDONLY);
	if (ab == -1)
		return (0);
	call = malloc(sizeof(char) * letters);
	if (call == NULL)
		return (0);
	num = read(ab, call, letters);
	if (num == -1)
		return (0);
	call[num] = '\0';
	write(STDOUT_FILENO, call, num);
	close(ab);
	return (num);
}
