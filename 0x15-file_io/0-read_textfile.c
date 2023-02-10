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
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	/*process file getc, putc, getw, putw, fprintf, fscanf etc*/
	i = read(fd, ch, letters);
	if (i < 0)
	{
		free(ch);
		return (0);
	}
	ch[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, ch, i);
	if (y < 0)
	{
		free(ch);
		return (0);
	}
	free(ch);
	return (y);
}
