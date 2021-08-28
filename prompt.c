#include "shell.h"

/**
  * prompt - prints the prompt and getline
  * @tkn: path token
  * @line: command line
  *
  * Return: pointer to the command line
  */
char *prompt(char **tkn, char *line)
{
	char *prompt = "$ ";
	size_t len_line = 0, len_prompt = _strlen(prompt);
	ssize_t num_chars_line = 0;

	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, prompt, len_prompt);
	num_chars_line = getline(&line, &len_line, stdin);
	if (num_chars_line < 0)
	{
		if (num_chars_line == EOF)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 1);
			free(tkn);
			free(line);
			exit(EXIT_SUCCESS);
		}
		if (errno)
		{
			free(tkn);
			free(line);
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
