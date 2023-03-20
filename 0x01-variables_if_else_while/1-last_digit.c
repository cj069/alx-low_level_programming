#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - entry mode
 * Description: printing the last digit
 * Return: always 0
*/

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is equal to zero", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and less than 5 and not zero", n, ld);
	}
	/* your code goes there */
	return (0);
}
