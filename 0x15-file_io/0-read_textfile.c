#include "holberton.h"

/**
  * read_textfile - print text file to stdout
  *
  * @filename: name of file to print
  * @letters: amount of bits to print
  *
  * Return: number of letters printed, 0 if it fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int count = 0, ret = 0;
	char *buf = malloc((sizeof(char) * letters) + 1);

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	count = read(fd, buf, letters);
	if (count == 0)
		return (0);

	ret = write(STDOUT_FILENO, buf, count);
	if (ret == 0)
		return (0);

	close(fd);
	free(buf);

	return (ret);
}
