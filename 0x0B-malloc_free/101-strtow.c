#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - function that finds the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be considered.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int ind = 0, leng = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		/* Format until end of string or a space is found */
		leng++;
		ind++;
	}
	return (leng);
}

/**
 * count_words - function counts the number of words within a string
 * @str: The string to be considered
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int ind = 0, words = 0, leng = 0;

	for (ind = 0; *(str + ind); ind++)
		leng++;

	for (ind = 0; ind < leng; ind++)
	{
		if (*(str + ind) != ' ')
		{
			words++;
			ind += word_len(str + ind);
		}
	}
	return (words);
}

/**
 * strtow - function that splits a string into words.
 * @str: The string to be split.
 *
 * Return: pointer to an array of strings, otherwise NULL
 */
char **strtow(char *str)
{
	char **strings;
	int ind = 0, words, k, letts, r;

	if (str == NULL || str[0] == '\0')
	{
		/* Check for invalid input */
		return (NULL);
	}
	/* Get the number of words in the string */
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}
	/* Allocate memory for the array of words */
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (k = 0; k < words; k++)
	{
		while (str[ind] == ' ')
			ind++;

		letts = word_len(str + ind);

		strings[k] = malloc(sizeof(char) * (letts + 1));

		if (strings[k] == NULL)
		{
			for (; k >= 0; k--)
				free(strings[k]);

			free(strings);
			return (NULL);
		}

		for (r = 0; r < letts; r++)
			strings[k][r] = str[ind++];

		strings[k][r] = '\0';
	}
	strings[k] = NULL;

	return (strings);
}
