# ALX Project: simple_shell
## Table of Contents
* [Description](#description)
* [File Structure](#file-structure)

## Description
Simple_shell is a command line interpreter, or shell, made by us in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is
intentionally minimalistic, was made in order to practice the basics of C learning, yet includes the basic functionality of a traditional Unix-like command line user interface.
Standard functions and system calls employed in simple_shell include:
	 `access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.`

## File Structure
* [main.h](main.h) -Program header file

* [.simple_shell_history](.simple_shell_history) - File where history must be saved

* [builtins.c](builtins.c) - Major builtin functions
	* `check_for_builtins` - Checks if the command is a builtin
	* `new_exit` - Exits the shell with the option of a specified status
	* `_env` - Prints the current shell's environment variables to the standard output
	* `new_setenv` -  Create a new environment variable, or edit an existing variable
	* `new_unsetenv` - Removes an environment variable

* [builtins2.c](builtins2.c) - Builtin functions that involves 'cd' builtin command.
	* `_new_cd` - Changes the current working directory .

* [enviroment.c](enviroment.c) - More builtin functions
	* `make_enviroment` - Make the shell environment from the environment.
	* `free_env` - Free the shell's environment

* [history.c](history.c) - History builting and funcions related to it.
	* `add_nodeint` - Add node in the beginning
	* `free_listint` - Free pointers related with malloc
	* `new_history` - Print the list of a single list
	* `_puts3` - Writes a string to standard output
	* `print_message` - Print a string to standart output

* [add_functions.c](add_functions.c) - Helpers functions for forking process
	* `_strcmp` - Compares two strings
	* `error_printing` - Prints a message error when a comand is not found.
	* `exec_error` - Prints exec errors.

* [helper_functions.c](helper_functions.c) - Functions to manage error messages     	and utils
	* `_puts_error` - Print a string to sdandart error
	* `prints_error_msg` - Prints error messages to standard error
	* `integer_converter` - Converts an unsigned int to a string
	* `atoi` - Converts a string into an integer

* [setenv_functions.c](setenv_functions.c) - helper functions for setenv builting
	* `add_value` - Creates a new environment variable string
	* `find_key` - Finds an environment variable
	* `add_key` - Create a new environment variable

* [memory_allocation.c](memory_allocation.c) - memory allocation functions
	* `_realloc` - A custom realloc function for arrays of pointers

* [new_strtok.c](new_strtok.c) - Custom strtok and helper functions
	* `check_match` - Checks if a character matches any in a string
	* `new_strtok` - A custom strtok for the shell
	* `build_path` - Combines two strings one representing the path directory and another representing the command file.

* [fork_child.c](fork_child.c) - functions related to executing commands
	* `fork_child` - Creates a child in  order to execute another program.
	* `path_finder` - Acts as an interface for functions that will be able
	*  to find the full path of a program.
	* `find_env_index` - Finds the index of an environmental variable.
	* `tokenize_path` - Separates a string of path as an array of
	*  strings containing the path directories.
	* `search_directories` - Looks through directories stored in path_tokens
	*  for a specific file aka command.

* [simple_shell.c](simple_shell.c) - essential functions to the shell
	* `main` - The main function of the program
	* `sig_handler` - Handles SIGINT

* [strfunctions.c](strfunctions.c) - functions related to string manipulation
	* `_puts` - Writes a string to standart output
	* `_strdup` - Duplicates a string
	* `_strcmpr` - Compares two strings
	* `_strcat` - Concatenates two strings with a `/` in the middle
	* `_strlen` - Calculates the length of a string

* [tokenizer.c](tokenizer.c) - tokenizing function
	* `tokenizer` - creates an array of tokens from a buffer with a specified delimiter
	* `tokenize` -tokenizes a buffer with a delimiter just use for for_child
	* `token_interface` - token interface
	* `count_token` - token's count

* [new_help.c](new_help.c) - Help builting and functions
	* `new_help` - Help builtin command
	* `new_help_help` -  Help builtin command help
	* `new_help_exit` - Help builtin command exit
	* `new_help_cd` - Help builtin command cd
	* `new_help_env` -  Help builtin command env

* [more_help_functions.c](more_help_functions.c) - More help functions
	* `new_help_history` - Help builtin command history
	* `new_help_unalias` - Help builtin command unalias
	* `new_help_unset` - Help builtin command unset
	* `new_help_unsetenv` - Help builtin command unsetenv
	* `new_help_setenv` -  Help builtin command setenv

* [more_help_functions2.c](more_help_functions2.c) -  More help functions
	* `new_help_alias` - Help builtin command alias
	* `new_help_else` - Error message if not command found

* [print_functions.c](print_functions.c) -  More utils
	* `print_str` - Prints a string character by character.
	* `_write_char` - Writes a character to stdout
	* `print_number` - Prints an unsigned number

