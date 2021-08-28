#include "shell.h"

/**
  * print_error - prints error message
  * @first_av: Name of file av[0]
  * @first_token: First token in the command line
  * @err_count: Count of the errors
  */
void print_error(char *first_av, char *first_token, int err_count)
{
	write(STDOUT_FILENO, first_av, _strlen(first_av));
	write(STDOUT_FILENO, ": ", 2);
	print_number(err_count);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, first_token, _strlen(first_token));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "not found", 9);
	write(STDOUT_FILENO, "\n", 1);
}
