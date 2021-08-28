#ifndef Shellh_Header
#define Shellh_Header

#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <dirent.h>
#include <limits.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <signal.h>

extern char **environ;

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t len);

char *prompt(char **tkn, char *line);
char **_strsplit(char *text);
void execute_proccess(char **argv);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void print_number(int n);
int search_path(char **array_tokens, char **tkn);
char *get_path(char **env);
void print_error(char *first_av, char *first_token, int err_count);
int get_built_in(char *s, char **tkn);
void _env(void);


#endif /* HOLBERTON_H */
