#include "holberton.h"

/**
  * create_file - create a new file
  *
  * @filename: name of file
  * @text_content: content of file
  *
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, strlen;
	unsigned int flag = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC| O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	for (strlen = 0; text_content[strlen] != 0; strlen++)
	{
	}

	if (text_content != NULL)
	{
		flag = write(fd, text_content, strlen);
	}
	close(fd);

	if (flag != 0)
		return (1);
	return (-1);

}
