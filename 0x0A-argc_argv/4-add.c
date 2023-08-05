#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int index;

	index = 0;
	while (index < strlen(str))

	{
		if (!isdigit(str[index]))
		{
			return (0);
		}

		index++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int index;
	int sti;
	int s = 0;

	index = 1;
	while (index < argc)
	{
		if (check_num(argv[index]))

		{
			sti = atoi(argv[index]);
			s += sti;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		index++;
	}

	printf("%d\n", s);

	return (0);
}
