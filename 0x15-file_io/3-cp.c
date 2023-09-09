#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void cls_file(int fd);
int cpy_file(char *file_from, char *file_to);
/**
 * create_buf - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * cpy_file - Copies the contents of a file to another file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 *
 * Return: 0 on success, exit with appropriate error codes otherwise.
 */
int cpy_file(char *file_from, char *file_to)
{
	int fm, t, r, w;
	char *buf;

	buf = create_buf(file_to);
	fm = open(file_from, O_RDONLY);
	r = read(fm, buf, 1024);
	t = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file_from);
			free(buf);
			exit(98);
		}
		w = write(t, buf, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
			free(buf);
			exit(99);
		}
		r = read(fm, buf, 1024);
		t = open(file_to, O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	cls_file(fm);
	cls_file(t);
	return (0);
}

/**
 * cls_file - Close file descriptors.
 * @fd: The file descriptor to be closed.
 */

void cls_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main .
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: function cpy_file.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return cpy_file(argv[1], argv[2]);
}
