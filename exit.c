#include "shell.h"

/**
 * _exit - exits shell
 * @info: Structure containing potential arguments. 
 *  Return: exits with a given exit status
 *         (0) if info.argv[0] != "exit"
 */
int _exit(info_t *info)
{
	int check;

	if (info->argv[1]) 
	{
		check = _erratoi(info->argv[1]);
		if (check == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->error_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->error_num = -1;
	return (-2);
}
