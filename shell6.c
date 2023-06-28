#include "main.h"

int main(void)
{
char *input = NULL;
size_t bufsize = 0;
while (1)
{
printf("($) ");
ssize_t line_length = custom_getline(&input, &bufsize, stdin);

if (line_length == -1)
{
break;
}
printf("Executing command: %s\n", input);
}
free(input);
return (0);
}
