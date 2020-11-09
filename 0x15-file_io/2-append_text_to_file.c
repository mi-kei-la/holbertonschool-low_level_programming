#include "holberton.h"

/**
  * append_text_to_file - append text to file
  *
  * @filename: name of file
  * @text_content: text to append
  *
  * Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, strlen, flag = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen] != 0; strlen++)
		{
		}
		flag = write(fd, text_content, strlen);
	}
	close(fd);

	if (flag == -1)
		return (-1);
	return (1);

}
