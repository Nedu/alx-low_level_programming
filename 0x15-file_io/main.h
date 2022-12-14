#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/uio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);

#endif