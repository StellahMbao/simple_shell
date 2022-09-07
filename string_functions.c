#include "shell.h"

/**
* _strcmp - compares two strings
* @s1: compared to s2;
* @s2: compared to s1;
*
* Return: returns difference between strings
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, output;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;

	output = (*(s1 + i) - *(s2 + i));

	return (output);
}

/**
* _strlen - returns the length of a string
* @s: string passed
*
* Return: returns length of string passed
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
* _strncmp - compares two strings up to n bytes
* @s1: compared to s2
* @s2: compared to s1
* @n: number of bytes
*
* Return: difference between s1 and s2
*/
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
* _strdup - dupicates string
* @s: to be duplicated
*
* Return: pointer to duplicate string
*/
char *_strdup(char *s)
{
	char *ptr;
	int i, len;

	if (s == NULL)
		return (NULL);

	len = _strlen(s);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; *s != '\0'; s++, i++)
		ptr[i] = s[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
* _strchr - locates a character in a string
* @s: string to be checked
* @c: character to be located
*
* Return: returns pointer to first occurence of character
* or NULL if character not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
