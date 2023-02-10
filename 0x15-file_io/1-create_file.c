#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file- prints a string recursively
 * @filename: name of file to create
 * @text_content: content of the file
 *
 * Return: int (1 on Success, -1 on failure).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, y = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fd, text_content, y);
		if (x != y)
			return (-1);
	}

	close(fd);
	return (1);
}
