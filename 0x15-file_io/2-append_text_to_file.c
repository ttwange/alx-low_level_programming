#include "main.h"
/**
 * _strlen - function
 * Description: a function that returns the length of the string
 * @s: string to measure
 * Return: length of s
 */
int _strlen(char *s)
{
	/*check if s string is at null byte*/
	if (!*s)
	{
		return (0);
	}
	/*if not, return 1 and go dive into function and add one*/
	/*this is synonymous to doing i++ when using while loop*/
	return (1 + _strlen(s + 1));
}

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: content string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * -1 if file does not exit or if you do not have the required permission to
 * write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	long int fd;
	long int len;
	long int wrt;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		len = _strlen(text_content);
	wrt = write(fd, text_content, len);
	if (wrt == -1)
		return (-1);
	close(fd);
	return (1);
}
