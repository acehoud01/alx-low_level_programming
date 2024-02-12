#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, or appropriate error code
 */
int main(int argc, char *argv[])
{

	int fd_to, fd_from, w;
	ssize_t size = 1024;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_to = open(argv[1], O_RDONLY);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd_from = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (size == 1024)
	{
		size = read(fd_to, buff, 1024);
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		w = write(fd_from, buff, size);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd_to %d\n", fd_to);
		exit(100); }
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd_to %d\n", fd_from);
		exit(100); }
	return (0);
}
