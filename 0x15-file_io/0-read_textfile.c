#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-reads a text file and prints it to the POSIX standard output
 * @filename: the text file to be read
 * @letters: the number of letters to read and print
 * Return: if filename =  NULL  (0), if write = fail or
 * does not write the expected 8 amount of bytes,  (0)
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fh;
	ssize_t w;
	ssize_t r;

	fh = open(filename, O_RDONLY);

	if (fh == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	r = read(fh, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fh);
	return (w);
}
