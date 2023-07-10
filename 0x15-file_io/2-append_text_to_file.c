/**
 * Write a function that appends text at the end of a file.
 * Prototype: int append_text_to_file(const char *filename, char *text_content);
 * where filename is the name of the file and text_content is the NULL terminated string to add at the end of the fil
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file
 * author : ECHARRAD AHMED
 */
#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_letters;
	int num_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		num_written = write(file_descriptor, text_content, num_letters);

		if (num_written == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
