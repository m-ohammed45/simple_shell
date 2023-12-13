#include "main.h"

/**
 * main - Babysimple shell.
 *@b: integar.
 *@argv: double pointer.
 *
 *Return: 0 .
*/

int main(int b, char **argv)
{
	char *prompt = "(Babyshell) $ ";
	char *lineptr;
	size_t c = 0;
	(void)b;
	(void)argv;
while (1)
{
	printf("%s", prompt);
	getline(&lineptr, &c, stdin);
	printf("%s\n", lineptr);
	free(lineptr);
}
	return (0);
}
