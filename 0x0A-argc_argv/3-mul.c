#include <stdio.h>
/**
 * main - multiplies two numbers provided as command line arguments.
 * @argc: the count of command line arguments.
 * @argv: an array of strings that contains the command line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
