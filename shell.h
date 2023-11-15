#ifndef _SHELL_H_
#define _SHELL_H_

/* Standard libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>

/*string handler functions*/
int interactive(info_t *info);
int _atoi(char *s);
int _isalpha(int c);
int _isdelim(char c, char *delimeter);
char *_strchr(char *s, char c);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);


/* Builtin command struct*/

/**
 * struct _builtin - Defines a struct that conatins built-in commands
 * with their respective implementation functions
 * @command: - Built-in command
 * @function: - Pointer to custom functions that have
 * similar functionalities as the built-in commands
 */
typedef struct _builtin
{
	char *command;
	int (*function)(char **line, int st);
} builtin;


#endif
