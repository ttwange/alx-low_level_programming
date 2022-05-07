#include "main.h"
/**
 * create_file - function that creates a file.
 * If the file exists, it trucates.
 * If the text_content is NULL, creates an empty file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success. -1 on failure such as file can not be created
 * , the file can not be written, filename is NULL or write fails
 */
int create_file(const char *filename, char *text_content)
{
	long int fd;
	long int wrt;
	long int txt_len;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content)
	{
		for (txt_len = 0; text_content[txt_len]; txt_len++)
		{
		}
		wrt = write(fd, text_content, txt_len);
		if (wrt == -1 || wrt != txt_len)
			return (-1);
	}
	close(fd);
	return (1);
}
