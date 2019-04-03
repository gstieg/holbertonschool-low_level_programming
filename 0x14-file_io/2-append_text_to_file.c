#include "holberton.h"

/**
 * append_text_to_file - append a new text file
 *
 * @filename: input for filename
 *
 * @text_content: input for content
 *
 * Return: 1 if success or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ab, num = 1, count = 0;

	if (filename == NULL)
		return (-1);
	ab = open(filename, O_WRONLY | O_APPEND);
	if (ab == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(ab);
		return (1);
	}
	else
	{
		while (text_content[count] != '\0')
		{
			count++;
		}
		num = write(ab, text_content, count);
		if (num == -1)
			return (-1);
	}
	close(ab);
	return (1);
}
