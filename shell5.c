#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - env built-in, that prints the current environment
 * @environ: the built in
 * print_environment: prints the current environment
 *
 * Return: 0
 */

char **environ;

void print_environment(void)
{
char **env = environ;
while (*env != NULL)
{
printf("%s\n", *env);
env++;
}
}
int main(void)
{
print_environment();
return (0);
}
