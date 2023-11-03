#include "main.h"
/**
  * main - copy from file to another.
  * @argc: resource file.
  * @argv: destination file.
  * Return: always 0.
  */

int main(int argc, char *argv[])
{
	char buffer[1024];
	char *text = "Usage: cp file_from file_to\n";
	int file_from, file_to;
	ssize_t rd = 1024, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", text);
		exit(97);
	}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 664);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s \n", argv[2]);
exit(99);
}
while (rd == 1024)
{
	rd = read(file_from, buffer, 1024);
	if (rd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
	exit(98);
	}
	wr = write(file_to, buffer, 1024);
	if (wr == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s \n", argv[2]);
	exit(99);
	}
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
exit(100);
}
	return (0);
}
