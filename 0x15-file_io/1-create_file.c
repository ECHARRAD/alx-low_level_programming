/**
 * Create a function that creates a file.
 * Prototype: int create_file(const char *filename, char *text_content);
 * where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
 * Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * author : echarrad ahmed
 */
#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int file_desc, n_letters, result;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_desc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	result = write(file_desc, text_content, n_letters);

	if (result == -1)
		return (-1);

	close(file_desc);

	return (1);
}
