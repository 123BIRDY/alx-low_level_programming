#include "main.h"
/**
 * _memcpy - function that copies memory data
 * @dest: destination memory area
 * @src: source memort area
 * @n: bytes from memory area to copy
 * Return: memory data replaced successful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}

return (dest);
}
