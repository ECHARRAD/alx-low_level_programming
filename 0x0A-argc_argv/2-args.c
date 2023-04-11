#include <stdio.h>
/**
 * main - prints all the command line arguments it receives.
 * @argc: the count of command line arguments.
 * @argv: an array of strings that contains the command line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
