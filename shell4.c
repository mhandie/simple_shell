#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - exit built-in, that exits the shell
 * exit shell: this exits the shell
 *
 * Return: 0
 */

void exit_shell(void)
{
printf("Exiting the shell...\n");
exit(EXIT_SUCCESS);
}
int main(void)
{
char input[100];
int exit_requested = 0;
while (!exit_requested)
{
printf("Shell > ");
fgets(input, sizeof(input), stdin);
input[strcspn(input, "\n")] = '\0';
if (strcmp(input, "exit") == 0)
{
exit_requested = 1;
}
else
{
printf("Command not recognized. Enter 'exit' to exit the shell.\n");
}
}
exit_shell();
return (0);
}
