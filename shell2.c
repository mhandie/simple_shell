#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: This function is the entry point for the shell.
 *
 * @param av - The command-line arguments.
 * @param env -  The environment variables.
 * @argv - The argument vector.
 * Return: 0
 */

void prompt(char **av, char **env)
{
char *string = NULL;
int c;
int status;
size_t b = 0;
ssize_t num_char;
char *argv[] = {NULL, NULL};
pid_t fay_pid;

while (1)
{
if (isatty(STDIN_FILENO))
printf("Cisfun$ ");
num_char = getline(&string, &b, stdin);
if (num_char == -1)
{

free(string);
exit(EXIT_FAILURE);
}
c = 0;
while (string[c])
{
if (string[c] == '\n')
string[c] = 0;
c++;
}
argv[0] = string;
fay_pid = fork();
if (fay_pid == -1)
{
free(string);
exit(EXIT_FAILURE);
}
if (fay_pid == 0)
{
if (execve(argv[0], argv, env) == -1)
{
printf("%s: No such file or directory\n", av[0]);
}
}
else
{
wait(&status);
}
}

}

