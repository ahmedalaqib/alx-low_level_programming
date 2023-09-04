#include "main.h"


/**
 * close_file - Close the file
 * @fd: The file descriptor of the file we want to close
 * Return: void
 **/
void close_file(int fid)
{
	int clr;

	clr = close(fid);

	if (clr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fid %d\n", fid);
		exit(100);
	}
}


/**
 * main - Copy the content of a file to another file
 * @argc: The number of arguments passed to the function
 * @argv: An array of pointers to the arguments passed
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	char buffer[1024];
	int src, dest, rd = -1, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	while (rd)
	{
		rd = read(src, buffer, 1024);
		if (src == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}


		wr = write(dest, buffer, rd);

		if (dest == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_file(src);
	close_file(dest);

	return (0);
}
