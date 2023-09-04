#include "main.h"

/**
 * create_file - Create a text file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 - On success
 *	 -1 - On failure (If filename is NULL,file can not be created,
 *	 file can not be written,write “fails”, etc…)
 **/
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len])
		len++;

	op = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
