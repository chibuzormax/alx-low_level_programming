#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum no of coins to make change
 * from an amount of money
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	int total, count = 0;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &p, 10);
	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", count);
		return (0);
}
