#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: destination string
 * @src: the sorce string
 * @n: the copy limit
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (src[b])
{
b++;
}
while (a < n && src[a])
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
