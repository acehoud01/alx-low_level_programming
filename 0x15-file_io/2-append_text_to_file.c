#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
	if (i < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[k])
			k++;
		j = write(i, text_content, k);
		if (j != k)
			return (-1);
	}
	close(i);
	return (1);
}
