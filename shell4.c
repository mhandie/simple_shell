#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - built in tht exits the shell
 * input: pointers
 */
int main(void)
{
char *input;
size_t bufsize = BUFFER_SIZE;
while (1)
{
input = (char *)malloc(bufsize * sizeof(char));
if (input == NULL)
{
perror("malloc error");
exit(EXIT_FAILURE);
}
printf("($) ");
getline(&input, &bufsize, stdin);

input[strcspn(input, "\n")] = '\0';

if (strcmp(input, "exit") == 0)
{
free(input);
break;
}
printf("Executing command: %s\n", input);

free(input);
}
return (0);
}

