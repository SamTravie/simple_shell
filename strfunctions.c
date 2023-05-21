#include "main.h"

/***** RETURNS A POINTER TO A NEW STRING ******/
/**
 * _strdup - function that returns pointer to new memory allocation
 * space which contains copy
 * @strtodup: is the string to be duplicated
 *
 * Return: pointer to the new duplicated string
 */

char *_strdup(char *strtodup)
{
	char *copy;

		int len, i;

	if (strtodup == 0)
		return (0);

	for (len = 0; strtodup[len]; len++)
		;
	copy = malloc((len + 1) * sizeof(char));

	for (i = 0; i <= len; i++)
		copy[i] = strtodup[i];

return (copy);
}


/****** COMPARES TWO STRINGS *****/
/**
 * _strcmpr - function that compares two strings
 * @strcmp1: first string, of two, to be compared in length
 * @strcmp2: second string, of two, to be compared
 *
 * Return: 0 on success, anything else is a failure
 */

int _strcmpr(char *strcmp1, char *strcmp2)
{
	int i;

	i = 0;
	while (strcmp1[i] == strcmp2[i])
	{
		if (strcmp1[i] == '\0')
			return (0);
		i++;
	}
	return (strcmp1[i] - strcmp2[i]);
}


/***** CONCATENATES TWO STRINGS *****/
/**
 * _strcat - funtion that concatenates two strings
 * @strc1: the first string
 * @strc2: the second string
 *
 * Return: pointer
 */

char *_strcat(char *strc1, char *strc2)
{
	char *newstring;
	unsigned int len1, len2, newlen, i, j;

	len1 = 0;
	len2 = 0;
	if (strc1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; strc1[len1]; len1++)
			;
	}
	if (strc2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; strc2[len2]; len2++)
			;
	}
	newlen = len1 + len2 + 1;
	newstring = malloc(newlen * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		newstring[i] = strc1[i];
	for (j = 0; j < len2; j++)
		newstring[i + j] = strc2[j];
	newstring[len1 + len2] = '\0';
	return (newstring);
}


/*** WRITES STRING TO STDOUT ***/
/**
 * _puts - function that writes a string to standard output
 * @str: is the string to write
 *
 * Return: number of chars printed or -1 on failure
 */

ssize_t _puts(char *str)
{
	ssize_t i, len;

	for (i = 0; str[i]; i++)
		;
	len = write(1, str, i);
	if (len != i)
	{
		perror("Fatal Error");
		return (-1);
	}
	return (len);
}

/*** MEASURE THE LENGTH OF A STRING ***/
/**
 * _strlen - function that calculates the length of a string
 * @str: is the string that needs length to be found
 * Return: on success the length of a string, otherwise 0.
 */

int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
