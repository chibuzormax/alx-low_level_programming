#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point of our program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');
	return (0);
}
