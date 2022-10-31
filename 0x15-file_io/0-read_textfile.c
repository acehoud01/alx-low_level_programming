#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: a file to read
 * @letters: number of letters to read and print
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, k;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	j = read(i, buff, letters);
	k = write(STDOUT_FILENO, buff, j);

	if (i == -1 || j == -1 || k == -1 || k != j)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(i);

	return (k);
}
