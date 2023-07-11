#include "main.h"
#include <stdlib.h>

char **strtow(char *str);
int index_len(char *str);
int check_word(char *str);

/**
 * strtow - function that splits a string into words
 * @str: string to consider
 * Return: pointer to an array of strings, otherwise NULL
 */

char **strtow(char *str)
{
	int words, xters, let, w, ind = 0;
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = check_word(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[ind] == ' ')
			ind++;
		xters = index_len(str + ind);
		strings[w] = malloc(sizeof(char) * (xters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (let = 0; let < xters; let++)
			strings[w][let] = str[ind++];
		strings[w][let] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}

/**
 * index_len - finds the index at the end of the first word
 * @str: string to consider
 * Return: the words index
 */

int index_len(char *str)
{
	int ind = 0, len = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		len++;
		ind++;
	}
	return (len);
}

/**
 * check_word - Calculates the number of words in a string
 * @str: string to consider
 * Return: the number of words
 */

int check_word(char *str)
{
	int count = 0, leng = 0, words = 0;

	for (count = 0; *(str + count); count++)
		leng++;
	for (count = 0; count < leng; count++)
	{
		if (*(str + count) != ' ')
		{
			words++;
			count += index_len(str + count);
		}
	}
	return (words);
}
