#include "main.h"

/**
 * more_numbers - print bumber for 0 - 14
 * Return number
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		int j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
