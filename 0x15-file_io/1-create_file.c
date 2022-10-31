#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
