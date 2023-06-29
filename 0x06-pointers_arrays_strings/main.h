#ifndef MAIN_H
#define MAIN_H

/* Prototypes */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
void reverse_array(int *a, int n);
char *string_toupper(char *z);
char *cap_string(char *k);
char *leet(char *x);
char *rot13(char *y);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
