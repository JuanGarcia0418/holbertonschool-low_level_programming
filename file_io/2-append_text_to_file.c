#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: command
 * Return: 1 on succes of program and -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int j;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		j = 0;
		while (text_content[j] != 0)
			j++;
		write(i, text_content, j);
	}
	close(i);
	return (1);
}
