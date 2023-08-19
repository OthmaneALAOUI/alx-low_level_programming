#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Perform simple arithmetic operations and print the result.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the argument strings.
 *
 * Return: 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 =atoi(argv[1]);
	num2 =atoi(argv[3]);
	operator = argv[2];
	
	if (get_po_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '%' && num2 == 0) || (*operator == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n",get_op_func(operator)(num1, num2));
	return (0);
}
