#include "main.h"

/**
 * new_cd - Change the current working directory
 * if no parameter is passed, changes directory to HOME.
 * @vars: string representing the user's input
 */
void new_cd(vars_t *vars)
{
	int index;

	if (vars->array_tokens[1] == NULL)
	{
		index = find_env_index(*vars, "HOME");
		chdir((vars->env[index]) + 5);
	}
	else if (_strcmpr(vars->array_tokens[1], "-") == 0)
		print_str(vars->array_tokens[1], 0);
	else
		chdir(vars->array_tokens[1]);
}
