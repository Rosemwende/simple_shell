#include "prompt.h"
#include "execution.h"
/**
 * main - simple shell entry
 *
 * Return: Always 0
 */
int main(void)
{
char *input;

while (1)
{
prompt();
input = read_line();

if (input == NULL)
{
printf("\n");
break;
}
if (*input != '\0')
execute(input);

free(input)
}
return(0);
}
