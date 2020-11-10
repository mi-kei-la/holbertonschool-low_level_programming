#include "holberton.h"

/**
  * main - entry point
  *
  * @ac: argument count
  * @av: argument vector
  * Return: always 0 (success)
  */

int main(int ac, char **av)
{
	int ffrom = 0, fto = 0;
	char *namefrom, *nameto;

	if (ac != 3) /* check correct number of arguments */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ffrom = open(av[1], O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_all(ffrom);
		exit(99);
	}

	namefrom = av[1];
	nameto = av[2];
/* loop: read ffrom and copy to fto in rounds of 1024 bytes each */
	loop(ffrom, fto, namefrom, nameto);
/* close open files */
	close_all(ffrom);
	close_all(fto);
	return (0);
}

/**
  * loop - read first file and copy its content
  *
  * @ffrom: first file
  * @fto: file to copy to
  * @namefrom: name of original file
  * @nameto: name of new file
  */

void loop(int ffrom, int fto, char *namefrom, char *nameto)
{
	char *buf = malloc(sizeof(char) * 1024);
	int rd = 1, wr = 0;

	while (rd > 0)
	{
		rd = read(ffrom, buf, 1024);
		if (rd == -1)
		{
			free(buf);
			close_all(ffrom);
			close_all(fto);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", namefrom);
			exit(98);
		}
		if (rd > 1)
		{
			wr = write(fto, buf, rd);
			if (wr == -1)
			{
				free(buf);
				close_all(ffrom);
				close_all(fto);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", nameto);
				exit(99);
			}
		}
	}
	free(buf);
}

/**
  * close_all - close open files
  *
  * @x: file descriptor
  */

void close_all(int x)
{
	int cl = 0;

	cl = close(x);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", x);
		exit(100);
	}
}
