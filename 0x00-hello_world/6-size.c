#include<stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	dloat e;

	printf("Size of an char: %byte(s)\n", sizeof(a));
	prints("Size of an int:%lu byte(s)\n", sizeof(c));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}

