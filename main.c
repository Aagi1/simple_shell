#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * sh_shell- read the stdin line and interpret 
 *
 * return: nothing
 *
 */

void sh_shell(void)
{
	char *line;
	char **args;
	int status;

	do
	{
		printf("$ ");
		line = sh_read_line();
		args = sh_slipt_line(line);
		status = sh_execute(args);

		free(line);
		free(args);
	}while(status);
}

