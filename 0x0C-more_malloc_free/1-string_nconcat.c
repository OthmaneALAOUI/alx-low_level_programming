#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		c = malloc(sizeof(char) * (l1 + n + 1));
	else
		c = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!c)
		return (NULL);

	while (i < l1)
	{
		c[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		c[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		c[i++] = s2[j++];

	c[i] = '\0';

	return (c);
}
