#include "monty.h"
/**
* main - Entry point of the program
* @argc: arguments
* @argv: arguments, monty files
* Return: an interger
*/
int main (int argc, char **argv)
{
	if (argc != 2)
		error_arguments();
	open_and_read(argv);
	return (0);
}
