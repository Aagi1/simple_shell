#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sh_read_line - Lit une ligne depuis l'entrée standard.
 *
 * Return: La ligne lue ou NULL en cas d'erreur.
 */
char *sh_read_line(void)
{
	char *line = NULL;
	ssize_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}

	return (line);
}
