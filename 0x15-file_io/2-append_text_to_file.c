#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, len);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}