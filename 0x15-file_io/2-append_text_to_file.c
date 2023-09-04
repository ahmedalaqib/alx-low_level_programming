#include "main.h"

/**
 * append_text_to_file - Append a text at the end of a file
 * @filename: The name of the file
 * @text_content: A NULL terminated string to add at the end of the file
 * Return: 1 - On success
 *	 -1 - On failure (If filename is NULL,If text_content is NULL
 *	 and the file does not exist or if you do not have the
 *	 required permissions to write the file)
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len])
		len++;

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
