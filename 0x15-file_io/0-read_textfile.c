#include "main.h"
/**
* read_textfile - read the text file
* @filename: name of the file
* @letters: size of text
* Return: the actual number of the letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int opn, rd;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	opn = open(filename, O_RDONLY);
	if (opn < 0)
	{
		free(buffer);
		return (0);
	}
	rd = read(opn, buffer, letters);
	write(STDOUT_FILENO, buffer, rd);
	close(opn);
	return (rd);
}
