#include "main.h"

/**
 * print_numbers - a function that print 0 to 9
 * no user input
 * Return: 0 for success or 1 when fail
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n");
}
