#include "main.h"
/**
 * _strncat - function that concatenates two string
 * @dest: The destination string
 * @src: The source string
 * @n: The limit of the concatenated string
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int dlen = 0, j = 0;

while (dest[dlen])
{
dlen++;
}
while (j < n && src[j])
{
dest[dlen] = src[j];
dlen++;
j++;
}
dest[dlen + n + 1] = '\0';
return (dest);
}
