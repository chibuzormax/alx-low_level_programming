#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 14
 */

void more_numbers(void)
{
	int n;
	int count = 0;

	while (count++ <= 10)
	{
		for (n = '0'; n <= '9'; n++)
			_putchar(n);
		for (n = 10; n <= 14; n++)
			_putchar(n % 10 + '1');
		_putchar('\n');
	}
}
