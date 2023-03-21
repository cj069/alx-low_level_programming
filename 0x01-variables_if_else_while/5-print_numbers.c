#include <stdio.h>

/**
  * main - entry
  * Description: print numbers of base 10, starting from zero.
  * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
