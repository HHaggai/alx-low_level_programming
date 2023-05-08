#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read txt file prnt to STDOUT.
 * @filename: txt file to be read
 * @letters: num of lett to be read
 * Return: w- act num of byts read and prnted
 *        0 when funct fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

