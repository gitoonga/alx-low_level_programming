#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (i == j)
	{
		return (0);
	}
	else if (i < j)
	{
		return (i - j);
	}
	else
	{
		return (i - j);
	}
}
