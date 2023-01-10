#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed to it
 * @argc: Arguments count variable
 * @argv: Arguments vector variable
 *
 * Return: Success
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%d\n", argc - 1);
	return (0);
}
