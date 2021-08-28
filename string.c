#include "shell.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: concatenates
 */
char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	while (*(dest + len) != 0)
	{
		len++;
	}

	for (j = 0; src[j] != '\0'; ++j, ++len)
	{
		dest[len] = src[j];
	}

	dest[len] = '\0';

	return (dest);
}

/**
* _strcpy - copies the string
* @dest: string
* @src: string
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _strlen - length of strings
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int size;

	for (size = 0 ; str[size] != '\0' ; size++)
		;
	return (size);
}

/**
 * _strncmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * @len: lenth
 * Return: compares
 */
int _strncmp(char *s1, char *s2, size_t len)
{
	size_t i = 0;
	int rest = s1[i] - s2[i];

	if (s1 == NULL || s2 == NULL)
	{
		return (-1);
	}
	while (rest == 0 && (s1[i] != '\0' || s2[i] != '\0') && i < (len - 1))
	{
		i++;
		rest = s1[i] - s2[i];
	}
	return (rest);
}

/**
 * _strcmp - compares two strings
 * @s1: first sitrng
 * @s2: second string
 * Return: an int greater, equal or less than 0 depending
 * on the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] - s2[i]) == 0 && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
