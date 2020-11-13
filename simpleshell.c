
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char **argv;
	char *string, *ptr;
	char delim = ' ';
	char *exit = "exit\n";
	pid_t child_pid;
	int status, i, c;
	size_t size = 0;

	while (1)
	{
		string = malloc(sizeof(char) * 32);
		write(STDOUT_FILENO, "prompt: ", 8);

		c = getline(&string, &size, stdin);
		if (c == -1)
		{
			if (c == EOF)
			{
				free(string);
				return (0);
			}
			perror("Error");
		}

		argv = malloc(sizeof(char) * 32);

		for (i = 0; string[i] != 0; i++)
		{
		}
		string[i - 1] = '\0'; /* remove new line */

		ptr = strtok(string, &delim);

		child_pid = fork();
		if (child_pid == -1)
			perror("Unsuccessful fork");
		else if (child_pid == 0)
		{
			for (i = 0; ptr != 0; i++)
			{
				argv[i] = ptr;
				ptr = strtok(NULL, &delim);
			}
			c = execve(argv[0], argv, NULL);
			if (c == -1)
				perror("Fail to execute");
		}
		else
			wait(&status);

		free(string);
		free(*argv);
	}
	return (0);

}
