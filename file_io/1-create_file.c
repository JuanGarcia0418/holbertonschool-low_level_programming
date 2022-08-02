#include "main.h"
#include <fcntl.h>
/**
 * create_file - create a file
 * @filename: is the name of the file create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (a == -1)
	{
		close(a);
		return (-1);
	}
	if (text_content != NULL)
	{
		b = 0;
		while (text_content[b] != 0)
			b++;
		write(a, text_content, b);
	}
	close(a);
	return (1);
}
