#include <stdio.h>

/**
 * main - A program that prints its namer followedn by a new line
 * @argc: Argument count variable
 * @argv: Argument vector
 *
 * Return: 0 always success
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
