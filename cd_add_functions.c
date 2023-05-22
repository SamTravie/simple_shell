#include "main.h"

/**
 * print_cd_1 - funtion that prints error when cd argument in invalid
 *              i.e. cd -asd22
 * @vars: vars parameter to include
 *
 * Return: void and print a message as shown below
 */

void print_cd_1(vars_t *vars)
{
	print_str("-bash: cd: ", 1);
	print_str(vars->array_tokens[1], 1);
	print_str(": invalid option", 0);
	print_str("cd: usage: cd [-] [--]", 0);
}

/**
 * print_cd_2 - function that prints error message when
 * cd argument doesn't exist i.e. cd das7d32
 * @vars: vars parameter to include
 *
 * Return: void and print a message as shown below
 */

void print_cd_2(vars_t *vars)
{
	print_str("-bash: cd: ", 1);
	print_str(vars->array_tokens[1], 1);
	print_str(": Not a directory", 0);
}
