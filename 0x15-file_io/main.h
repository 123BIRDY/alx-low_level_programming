#ifndef MAIN_H
#define MAIN_H

/*
 * Description: This is the header file that contains all the prototypes
 * for the functions in 0x15-file_io project
 */

#define BUFFER_SIZE 1024

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>

/* Prototypes */
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
