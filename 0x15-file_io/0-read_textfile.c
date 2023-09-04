#include "main.h"

/**
 * read_textfile - Read a text file and print it to the POSIX standard output
 * @filename: The name of the file to be printed
 * @letters: The number of letters to read and print from the file
 * Return: The actual number of letters it could read and print
 *	 0 - if the file can not be opened, read, or if
 *	 filename is NULL, or if write fails or does not
 *	 write the expected amount of bytes
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
