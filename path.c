#include "shell.h"

/**
 * display_prompt - displays the output
 *
 * Return: output
 */
void display_prompt(void)
{
	printf("simple_shell$ ");
	fflush(stdout);
}

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char command[100];

	while (1)
	{
		display_prompt();
		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			printf("\nexit simple_shell\n");
			break;
		}
		if (strchr(command, ' ') != NULL)
		{
			printf("Error: Command must be a single word.\n");
			continue;
		}
		if (execlp(command, command, (char *)NULL) == -1)
		{
			printf("Error: '%s' not found\n", command)
		}
	}
	return (0);
}
