#ifndef MAIN_H
#define MAIN_H

/*
 * Description: Header file that contains
 * all the prototypes and functions
 */

#define BUFFER_SIZE 1024

#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

/* Prototypes */
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
