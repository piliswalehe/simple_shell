#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
/**
 * _isdelim - checks if character is a delimeter
 * @c: the char to check
 * @delimeter: the delimeter string
 * Return: 1 if true, 0 if false
 */
int _isdelim(char c, char *delimeter)
{
	while (*delimeter)
		if (*delimeter++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for lowercase or uppercase character
 * @c: Character to be checked
 * Return: Always 1 for alphabetic character and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{return (1);
	}
	return (0);
}
/**
 * _atoi - function that converts a string into an integer
 * @s: String to be converted
 *
 * Return: (0) if there no numbers in string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
