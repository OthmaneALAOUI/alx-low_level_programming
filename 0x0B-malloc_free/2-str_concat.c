#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		c++;
	t = malloc(sizeof(char) * (i + c + 1));

	if (t == NULL)
		return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		t[i] = s2[c];
		i++, c++;
	}
	t[i] = '\0';
	return (t);
}
