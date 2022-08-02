#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - takes a text files and print
 * @filename: file name
 * @letters: letters to be printed
 * Return: count of printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd;
	char *store;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	store = malloc(sizeof(char) * letters);
	if (store == NULL)
		return (0);
	rd = read(fd, store, letters);
	if (rd == -1)
	{
		return (0);
	}
	rd = write(STDOUT_FILENO, store, rd);
	if (rd == -1)
		return (0);
	free(store);
	close(fd);
	return (rd);
}
