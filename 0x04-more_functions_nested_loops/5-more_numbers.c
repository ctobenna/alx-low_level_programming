#include "main.h"

/**
 * more_numbers - print bumber for 0 - 14
 * Return number
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
