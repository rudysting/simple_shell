#include "shell.h"

/**
 * _getline - get commands from STDIN
 * Return: Zero on success, -1 on failure
 */
char *_getline()
{
	char *cmd = NULL;
	size_t n;

	printf(">>> ");
	if (getline(&cmd, &n, stdin) == -1)
	{
		free(cmd);
		exit(0);
	}
	tokenizer(cmd);
	return (0);
}
