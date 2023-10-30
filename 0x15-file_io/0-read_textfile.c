#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the standard output.
  * @filename: file name.
  * @letters: number of letters it should read and print.
  * Return:  the actual number of letters it could read and print or 0.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd  == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
		return (0);
	close(fd);
	free(buf);
	return (wr);
}
