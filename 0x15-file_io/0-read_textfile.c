#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile- prints a string recursively
 * @filename: name of file to print from
 * @letters: number of letters or characters to print
 *
 * Return: void.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/**
	 * Declare file
	 * open file fopen()
	 */
	int fd, y, i;
	char *ch;

	ch = malloc(sizeof(char) * letters);
	if (!ch)
		return (0);
	if (filename == NULL)
		return (0);
	fd = fopen(filename, 0_RDONLY);
	if (fp < 0)
		return (0);

	/*process file getc, putc, getw, putw, fprintf, fscanf etc*/
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
