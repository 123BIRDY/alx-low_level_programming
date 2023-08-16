#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

/* Libraries in the project */
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);

#endif
