#include "main.h"
#include <string.h>

/**
  * create_file - creates a file.
  * @filename: the name of the file to create.
  * @text_content: terminated string to write to the file.
  * Return: 1 on success, -1 on failure.
  */

int create_file(const char *filename, char *text_content)
{
	int c_file, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	c_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (c_file == -1)
		return (-1);

	wr = write(c_file, text_content, strlen(text_content));

	if (wr == -1)
	{
		close(c_file);
		return (-1);
	}
	close(c_file);
	return (1);
}
