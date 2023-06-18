#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -  print the last digit of the number store in the variable
 *Description: print the output
 *Return: always (0)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
	{
		printf("last digitof %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and less than 6 not 0\n", n, ld);
	}
	return (0);
}
