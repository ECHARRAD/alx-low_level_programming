#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocates memory for a copy of the input string and returns pointer to it.
 * @str: pointer to the string to be duplicated.
 * Return: pointer to the newly allocated duplicate string.
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}
