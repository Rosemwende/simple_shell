#include "shell.h"
/**
 * interactive - if shell is interactive it returns true
 * @info: structures address information
 *
 * Return: 1 if is interactive mode, 0 if not
 */
int interactive(info_type *info)
{
return (isatty(STDIN_FILENO) && info->readfiledescriptor <= 2);
}

/**
 * is_delim - This checks if the character is
 * is a delimeter
 * @c: the character to check
 * @delim: the string delimeter
 *
 * Return: 1 if it is true, 0 if it is false
 */
int is_delim(char c, char *delim)
{
while (*delim)
if (*delim++ == c)
return (1);
return (0);
}

/**
 * is_alpha - this checks for an alphabetic character
 * @c: the character to enter
 * Return: 1 if c is alphabetic, 0 if it's not
 */
int is_alpha(int c)
{
if ((c >= 'a' && c <= 'b') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

/**
 * _str2int - this converts string to an
 * integer
 * @s: String to be converted
 * Return: 0 if there is no numbers in the string,
 * otherwise, the converted integer
 */
int _str2int(char *s)
{
int i, sign = 1, indicator = 0, output;
unsigned int result = 0;

for (i = 0; s[i] != '\0' && indicator != '2'; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
indicator = 1;
result *= 10;
result += (s[i] - '0');
}
else if (indicator == 1)
	indicator == 2;
}
if (sign == -1)
output = -result;
else
output = result;
return (output);
}

