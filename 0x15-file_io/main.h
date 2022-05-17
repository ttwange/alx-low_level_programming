#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>

int _putchar(void);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t _strlen(char *);
int append_text_to_file(const char *filename, char *text_content);
void error_file(int file_from, int file_to, char *argv[]);
int main(int argc, char *argv[]);
#endif
